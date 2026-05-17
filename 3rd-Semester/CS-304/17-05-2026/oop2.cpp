// Practice Session:

// friend function & friend class:

// #include "bits/stdc++.h"
// using namespace std;

// // friend class example
// class X
// {
// private:

//     int a;

// public:

//     X()
//     {
//         a = 100;
//     }

//     friend class Y;
// };

// class Y
// {
// public:

//     void show(X obj)
//     {
//         cout << "X class variable is showing inside class Y: "
//              << obj.a << endl;
//     }
// };

// int main()
// {
//     Y y1;

//     X x1;

//     y1.show(x1);

//     return 0;
// }

// frined function:

#include "bits/stdc++.h"
using namespace std;

class Test
{
private:

    int a;

public:

    Test()
    {
        a = 50;
    }

    // Friend Function Declaration
    friend void show(Test obj);
};

// Friend Function Definition
void show(Test obj)
{
    cout << "Private value of class Test is: "
         << obj.a << endl;
}

int main()
{
    Test t1;

    show(t1);

    return 0;
}


// https://youtu.be/lcrZvDoYaj8?si=ek2D72hCFk1ydfbe