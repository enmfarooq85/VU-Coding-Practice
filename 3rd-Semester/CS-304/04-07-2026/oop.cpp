// Multiple Inheritance in C++

// In this example, class C inherits from both class A and class B. Both classes A and B have a method named display(). When we try to call the display() method on an object of class C, it causes ambiguity because the compiler cannot determine which display() method to call. To resolve this ambiguity, we can explicitly specify which class's display() method we want to call using the scope resolution operator (::).

#include "iostream"
using namespace std;

class A
{
    int a;

public:
    A() { a = 10; };
    void display()
    {
        cout << a << endl;
    }
};

class B
{
    int b;

public:
    B() { b = 20; };
    void display()
    {
        cout << b << endl;
    }
};

class C : public B, public A
{
};

int main()
{
    C obj;
    // obj.display(); // This will cause ambiguity because both A and B have a display() method.
    obj.A::display(); // This will call the display() method of class A
    obj.B::display(); // This will call the display() method of class B
}