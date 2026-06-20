#include "iostream"
#include "stdlib.h"
using namespace std;

class Bank
{
public:
    int a;

    Bank(int n)
    {
        a = n;
    }

    // void display(int a) // implicit copy constructor
    // {
    //     cout << a << endl;
    // }

    Bank(Bank &obj) // explicit copy constructor
    {
        a = obj.a;
    }

    void display()
    {
        cout << a << endl;
    }
};

// Copy Constructor Using Inheritance
class Base
{
public:
    int a;

    Base(int n) : a(a)
    {
        cout << "a: " << a << endl;
    };
};

class Derived : public Base
{
public:
    int b;
    Derived(int x, int y) : Base(x), b(y)
    {
        cout << "b: " << b << endl;
    }
};

// Type Casting

// Implcit: Khud se convert krna
// Explicit: Manual conversion

// CPP draft standards includes four types of following casting operators
// static_cast (support down casting)
// const_cast (support up casting)
// dynamic_cast (support down casting)
// reinterpret_cast (support character array casting)

// In prespective of inheritance we have two types
// up-casting(derived to base class)
// down-casting(base to dervied class)

// static_cast
class Base1
{
public:
    void hello1()
    {
        cout << "Base class Function: " << endl;
    };
};

class Derived1 : public Base1
{
public:
    void hello1()
    {
        cout << "Derived class function: " << endl;
    };
};

void print(char *str)
{
    cout << "str: " << str << endl;
}

int main()
{

    // Bank b1(20);
    // Bank b2(b1);
    // b1.display();

    // Derived d1(10, 30);

    // static cast:
    // Base1 *b21 = new Derived1();
    // b21->hello1();
    // Derived1 *d21 = static_cast<Derived1*>(b21);
    // d21->hello1();

    // reinterpret_casting:
    // Base1 *b21 = new Derived1();
    // b21->hello1();
    // Derived1 *d21 = reinterpret_cast<Derived1*>(b21);
    // d21->hello1();

    // dynamic_cast:
    // Derived1 *d31 = new Derived1();
    // d31->hello1();
    // Base1 *b31 = dynamic_cast<Base1 *>(d31);
    // b31->hello1();

    // const_static
    const char *arr = "I am an Engineer.";
    print(const_cast<char*>(arr));

    return 0;
}