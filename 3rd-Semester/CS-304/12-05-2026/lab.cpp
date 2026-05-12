#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    // stream extraction operator means taking input
    friend istream &operator>>(istream &input, Complex &c)
    {
        cout << "Please enter real part of complex number: ";
        input >> c.real;

        cout << "Please enter imagery part of complex number: ";
        input >> c.imag;

        return input;
    };

    // stream insertion operator mean showing the output
    friend ostream &operator<<(ostream &output, Complex &c)
    {
        output << "(" << c.real << ")" << " + " << "(" << c.imag << "i" << ")";
        return output;
    }

    // minus overloading operator
    Complex operator-()
    {
        Complex temp;

        temp.real = -real;
        temp.imag = -imag;

        return temp;
    }

    // pre increment overloading operator
    Complex operator++()
    {
        ++real;
        ++imag;

        return *this;
    }
    // post increment overloading operator
    Complex operator++(int)
    {
        Complex temp;

        temp.real = real;
        temp.imag = imag;

        real++;
        imag++;

        return temp;
    }
};

int main()
{
    Complex com1, com2, com3, com4;

    cin >> com1;

    cout << "\ncom1 = " << com1 << endl;

    com2 = -com1;

    cout << "com2 = " << com2 << endl;

    com3 = ++com1;

    cout << "com3 = " << com3 << endl;

    com4 = com3++;

    cout << "com4 = " << com4 << endl;

    return 0;
}