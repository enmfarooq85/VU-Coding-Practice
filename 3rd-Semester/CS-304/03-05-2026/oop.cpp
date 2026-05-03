#include <iostream>
using namespace std;

class Account
{
private:
    int accountNo;
    double balance;
    string bankName;
    string branchCode;

public:
    Account(int accNo, double bal, string bank, string branch)
    {
        accountNo = accNo;
        balance = bal;
        bankName = bank;
        branchCode = branch;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        balance -= amount;
    }

    double getBalance()
    {
        return balance;
    }

    int getAccountNo()
    {
        return accountNo;
    }

    string getBankName()
    {
        return bankName;
    }

    string getBranchCode()
    {
        return branchCode;
    }
};

class Customer
{
private:
    int id;
    string name;
    string cnic;
    string address;
    Account account;

public:
    Customer(int i, string n, string c, string a,
             int accNo, double bal, string bank, string branch)
        : account(accNo, bal, bank, branch)
    {
        id = i;
        name = n;
        cnic = c;
        address = a;
    }

    void deposit(double amount)
    {
        account.deposit(amount);
    }

    void withdraw(double amount)
    {
        account.withdraw(amount);
    }

    void print()
    {
        cout << "Customer Id: " << id << endl;
        cout << "Customer Name: " << name << endl;
        cout << "Customer CNIC: " << cnic << endl;
        cout << "Customer Address: " << address << endl;
        cout << "Account Number: " << account.getAccountNo() << endl;
        cout << "Bank Name: " << account.getBankName() << endl;
        cout << "Branch Code: " << account.getBranchCode() << endl;
        cout << "Balance: " << account.getBalance() << endl;
    }
};

int main()
{

    Customer c1(10, "abc", "35204-7458545-9", "Lahore",
                1, 50000, "HBL", "1924");

    cout << "Customer information having initial amount (50000) is given below:\n\n";
    c1.print();

    cout << "\nCustomer information after depositing amount (10000) is given below:\n\n";
    c1.deposit(10000);
    c1.print();

    cout << "\nCustomer information after withdrawing amount (20000) is given below:\n\n";
    c1.withdraw(20000);
    c1.print();

    return 0;
}