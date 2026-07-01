// Abstract class:

// In C++, we can make a class abstract by making its function(s) pure virtual. Conversely, a class with no pure virtual function is a concrete class (which object can be instantiate.

// Concrete Class:

// Concrete classes Implements a concrete concept they can be instantiated they may inherit from an abstract class or another concrete class. So far the classes we studied were concrete classes.

// Pure Virtual Functions:

// A pure virtual represents an abstract behavior and may have not implementation for example draw method in Shape class represent abstract behavior as Shape class itself doesn’t have its existence in real world so there is no question of drawing it however its derived concrete classes like Line, Circle and Triangle does have physical existence and overridden draw method in these classes will have implementation . A function is declared pure virtual by following its header with “= 0”.

// Virual Desctructor:

// The destructor is called according to static type of any class pointer for example if we have saved derived class pointers in shape class pointers array as we did in previous lecture when we will call destructor using delete operator the destructor of base class Shape will be called as static type of array is Shape.

//

#include "iostream"
using namespace std;

class Shape
{
public:
    virtual void hello() = 0;
};

class Line : public Shape
{
public:
    virtual void hello()
    {
        cout << "Hello from Line class" << endl;
    }
};

int main()
{
    return 0;
};