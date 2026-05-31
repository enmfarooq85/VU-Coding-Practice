#include "bits/stdc++.h"
using namespace std;

class Test
{
public:
    int i;
    Test()
    {
        this->i = 0;
    }

    // pre-increment operator overloading
    Test &operator++()
    {
        ++i;
        return *this;
    }

    void show()
    {
        cout << i << endl;
    }
};

int main()
{
    Test t1;
    t1.show(); // 0
    ++t1;      // 1
    t1.show(); // 1
    return 0;
}