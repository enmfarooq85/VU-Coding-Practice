// Unary Operator overloading & type casting

#include "bits/stdc++.h"
using namespace std;

class Test
{
private:
    int i;

public:
    Test()
    {
        i = 0;
    };

    // pre increment operator overloading
    Test operator++()
    {
        Test temp;
        temp.i = ++i;
        return temp;
    }

    // post increment operator overloading
    Test operator++(int)
    {
        Test temp;
        temp.i = i++;
        return temp;
    }

    // pre decrement operator overloading
    Test operator--()
    {
        Test temp;
        temp.i = --i;
        return temp;
    }

    // post decrement operator overloading
    Test operator--(int)
    {
        Test temp;
        temp.i = i--;
        return temp;
    }

    void show()
    {
        cout << "Value of i: " << i << endl;
    }
};

int main()
{

    // int i = 10;
    // i++;
    // cout << 10 << endl; // 10

    Test t1;

    Test t2 = ++t1; // 1
    ++t2; // 2
    t2--; // 2
    --t2; // 0

    t2.show(); // Value of i: 0

    return 0;
}