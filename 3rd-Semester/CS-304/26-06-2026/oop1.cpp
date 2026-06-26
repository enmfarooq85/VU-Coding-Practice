// #include <iostream>
// using namespace std;

// // Grandparent class
// class A
// {
// public:
//     A()
//     {
//         cout << "Constructor of Class A" << endl;
//     }
// };

// // Parent class
// class B : public A
// {
// public:
//     B()
//     {
//         cout << "Constructor of Class B" << endl;
//     }
// };

// // Child class
// class C : public B
// {
// public:
//     C()
//     {
//         cout << "Constructor of Class C" << endl;
//     }
// };

// int main()
// {
//     C obj;

//     return 0;
// }


#include <iostream>
using namespace std;

class A
{
public:
    A(int x)
    {
        cout << "Class A Constructor: " << x << endl;
    }
};

class B : public A
{
public:
    B(int y) : A(y)
    {
        cout << "Class B Constructor" << endl;
    }
};

class C : public B
{
public:
    // ❌ Error: A is not the direct base class of C
    C(int x, int y) : A(x), B(y)
    {
        cout << "Class C Constructor" << endl;
    }
};

int main()
{
    C obj(10, 20);

    return 0;
}