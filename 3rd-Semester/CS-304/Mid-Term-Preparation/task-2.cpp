#include "bits/stdc++.h"
using namespace std;

class Test
{
public:
    int i;

    Test(int i)
    {
        this->i = i;
    }

    friend bool operator==(const Test &t1, const Test &t2)
    {
        if (t1.i == t2.i)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    friend bool operator!=(const Test &t1, const Test &t2)
    {
        if (t1.i != t2.i)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Test t1(100), t2(200);
    bool t3 = t1 == t2;
    cout << (t3 == 1 ? "t1 and t2 is equal." : "t1 and t2 is not equal") << endl;
    return 0;
};