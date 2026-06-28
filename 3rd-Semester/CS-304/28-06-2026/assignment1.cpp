#include <iostream>
#include <string>
using namespace std;

class TaxPayer
{
protected:
    string payerName;
    string payerType;
    float taxRate;

public:
    TaxPayer(string name, string type, float rate)
    {
        payerName = name;
        payerType = type;
        taxRate = rate;
    }

    virtual float CalcWithHoldingTax() = 0;
    virtual void DetailInfo() = 0;

    virtual ~TaxPayer()
    {
    }
};

class FilerTaxPayer : public TaxPayer
{
private:
    string ntn;
    int nFilerYears;
    int propertyCost;

public:
    FilerTaxPayer(string name, string type, float rate, string ntn, int years, int propertyCost) : TaxPayer(name, type, rate)
    {
        this->ntn = ntn;
        this->nFilerYears = years;
        this->propertyCost = propertyCost;
    }

    float CalcWithHoldingTax() override
    {
        return propertyCost * taxRate / 100;
    }

    void DetailInfo() override
    {
        cout << "\n========== FILER TAX PAYER ==========" << endl;
        cout << "Payer Name: " << payerName << endl;
        cout << "Payer Type: " << payerType << endl;
        cout << "National Tax Number: " << ntn << endl;
        cout << "Filer Years: " << nFilerYears << endl;
        cout << "Property Cost: " << propertyCost << endl;
        cout << "Tax Rate: " << taxRate << "%" << endl;
        cout << "Withholding Tax: " << CalcWithHoldingTax() << endl;
        cout << "Number of years from which the payer is filer: " << nFilerYears << endl;
        cout << "***********************" << endl;
    }

    ~FilerTaxPayer()
    {
        cout << endl;
        cout << "Destructor of FilerTaxPayer Called for " << payerName << endl;
        cout << endl;
    }
};

class NonFilerTaxPayer : public TaxPayer
{
private:
    bool isEligible;
    int propertyCost;

public:
    NonFilerTaxPayer(string name,
                     string type,
                     float rate,
                     int propertyCost)
        : TaxPayer(name, type, rate)
    {
        this->propertyCost = propertyCost;

        if (propertyCost <= 3000000)
            isEligible = true;
        else
            isEligible = false;
    }

    float CalcWithHoldingTax() override
    {
        if (isEligible)
            return propertyCost * taxRate / 100;
        else
            return 0;
    }

    void DetailInfo() override
    {
        cout << "======= NON-FILER TAX PAYER ======= " << endl;
        cout << "Payer Name: " << payerName << endl;
        cout << "Payer Type: " << payerType << endl;
        cout << "Property Cost: " << propertyCost << endl;
        cout << "Tax Rate: " << taxRate << "%" << endl;
        cout << "Eligible: " << (isEligible ? "YES" : "NO") << endl;

        if (isEligible)
            cout << "Withholding Tax: " << CalcWithHoldingTax() << endl;
        else
            cout << "Not eligible to buy property above 30 Lac." << endl;
            cout << "***********************" << endl;
    }

    ~NonFilerTaxPayer()
    {
        cout << endl;
        cout << "Destructor of NonFilerTaxPayer Called for " << payerName << endl;
        cout << endl;
    }
};

int main()
{
    cout << "========== FBR TAX PAYER MANAGEMENT SYSTEM ==========" << endl;

    float propertyCost;

    // filer

    cout << "\nEnter Property Cost for FILER: ";
    cin >> propertyCost;

    TaxPayer *ptr;

    ptr = new FilerTaxPayer(
        "Ahmed",
        "Filer",
        2.5,
        "12345",
        8,
        propertyCost);

    ptr->DetailInfo();

    delete ptr;

    // non-filer

    cout << "\nEnter Property Cost for NON-FILER: ";
    cin >> propertyCost;

    ptr = new NonFilerTaxPayer(
        "Umar",
        "Non-Filer",
        5.0,
        propertyCost);

    ptr->DetailInfo();

    delete ptr;

    return 0;
}