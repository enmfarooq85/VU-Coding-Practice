#include "iostream"
using namespace std;

// Function overloading allows multiple functions to have the same name but different parameter lists within the same scope, whereas function overriding occurs when a derived class redefines a base class function with the exact same name and parameter list.


// class Calculator
// {
// public:
//     // Function to add two integers
//     int add(int a, int b)
//     {
//         return a + b;
//     }

//     // Overloaded function to add three integers
//     int add(int a, int b, int c)
//     {
//         return a + b + c;
//     }

//     // Overloaded function to add two floating-point numbers
//     float add(float a, float b)
//     {
//         return a + b;
//     }
// };

// int main()
// {
//     Calculator obj;

//     cout << "Sum of 10 and 20 = " << obj.add(10, 20) << endl;
//     cout << "Sum of 10, 20 and 30 = " << obj.add(10, 20, 30) << endl;
//     cout << "Sum of 5.5 and 4.5 = " << obj.add(5.5f, 4.5f) << endl;

//     return 0;
// }

// Base class
class Animal
{
public:
    // Virtual function
    virtual void sound()
    {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    // Overriding the base class function
    void sound() override
    {
        cout << "Dog barks." << endl;
    }
};

int main()
{
    Animal *ptr;     // Base class pointer
    Dog d;           // Derived class object

    ptr = &d;        // Pointer points to derived object

    // Calls the overridden function in Dog
    ptr->sound();

    return 0;
}