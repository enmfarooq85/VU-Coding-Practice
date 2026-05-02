// Static data members and member functions

// Static data members are shared by all objects of a class. They are not tied to any specific object and can be accessed using the class name. Static member functions can only access static data members and other static member functions.

// Rules for static members:

// 1. Static data members must be defined outside the class definition.
// 2. Static member functions can only access static data members and other static member functions.
// 3. Static member functions cannot access non-static data members or non-static member functions.
// 4. Static member functions can be called using the class name without creating an object.
// 5. Static data members are initialized only once and retain their value across all instances of the class.

#include "iostream"
using namespace std;

class Box
{
private:
    double length;
    static int objectCount; // static data member to count the number of objects
public:
    Box()
    {
        objectCount++; // Increment object count when a new object is created
    }

    // static member function to get the object count
    static int getObjectCount()
    {
        return objectCount;
    }
};

int Box::objectCount = 0;

int main()
{
    Box box1;
    Box box2;
    cout << "Number of objects created: " << Box::getObjectCount() << endl; // Accessing static member function using the class name
    return 0;
}