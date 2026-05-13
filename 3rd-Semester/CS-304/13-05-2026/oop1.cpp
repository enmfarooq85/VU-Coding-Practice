// Practice:

#include "iostream"
using namespace std;

class Terminal
{
private:
    int chromeUsage;
    int vsCodeUsage;

    // no impact of the access modifiers on the friend function
    // overloading the stream extraction operator to take the input from the user defined object
    friend istream &operator>>(istream &input, Terminal &ter)
    {
        cout << "Please enter your chrome browser usage: ";
        input >> ter.chromeUsage;

        cout << "Please enter your VScode IDE usage: ";
        input >> ter.vsCodeUsage;
        return input;
    };

    friend ostream &operator<<(ostream &output, Terminal &ter)
    {
        output << "-----" << endl;
        output << "Your Chrome Browser Usage in percent: " << ter.chromeUsage << "%" << endl;
        output << "Your VScode Usage in percent: " << ter.vsCodeUsage << "%" << endl;
        return output;
    };
};

int main()
{
    Terminal ter1;
    cin >> ter1;
    cout << ter1;

    return 0;
}