#include "bits/stdc++.h"
using namespace std;

// Unaru operator...

class Test
{
private:
    int a;
    int b;

public:
    Test()
    {
        a = 0;
        b = 0;
    };

    Test(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    // we will not pass any parameter for the unary operators...
    Test operator-()
    {
        // self assignment is happening here
        a = -a;
        b = -b;
        return Test(a, b);
    }

    void show()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }
};

int main()
{

    Test t1(10, -20), t2(-33, 111);

    -t1;
    t1.show();
    -t2;
    t2.show();

    return 0;
}