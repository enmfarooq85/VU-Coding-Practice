// Pratice session: Self-Assignment Problem

// What is Self Assignment?

// Self assignment happens when an object is assigned to itself. It usually occurs in overloaded assignment operator (operator=).

// Problem in Self Assignment

// During assignment, old memory/resources are often deleted before copying new data.
// If object assigns itself:
// Data may get deleted before copying.

// Causes:

// Data loss
// Crashes
// Undefined behavior

// Example Without Self Assignment Check

// #include <iostream>
// using namespace std;

// class Test {

// public:

//     int* ptr;

//     Test(int value) {

//         ptr = new int;

//         *ptr = value;
//     }

//     // Assignment Operator
//     Test& operator=(const Test& obj) {

//         // Old memory deleted
//         delete ptr;

//         // Problem occurs here in self assignment
//         ptr = new int;

//         *ptr = *obj.ptr;

//         return *this;
//     }

//     void display() {

//         cout << "Value = " << *ptr << endl;
//     }

//     ~Test() {

//         delete ptr;
//     }
// };

// int main() {

//     Test t1(100);

//     t1 = t1; // self assignment corruption

//     t1.display();

//     return 0;
// }

// Solution of this problem by simply implementing if statement

#include <iostream>
using namespace std;

class Test
{
public:
    int value;

    Test(int v)
    {
        value = v;
    }

    // Assignment Operator
    Test &operator=(const Test &obj)
    {

        cout << "Assignment Operator Called" << endl;

        // Self assignment check
        if (this == &obj)
        {
            cout << "Self Assignment Detected" << endl;
            return *this;
        }

        value = obj.value;

        return *this;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{

    Test t1(10);

    t1 = t1; // self assignment

    t1.display();

    return 0;
}