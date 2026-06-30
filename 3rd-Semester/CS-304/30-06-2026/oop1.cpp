// Virtual Functions:

// A virtual function in C++ is a member function in a base class that you expect to redefine (override) in derived classes to achieve runtime polymorphism.

// Pure virtual functions:

// A pure virtual function is a virtual function declared with = 0 in a base class. It is used to enforce that derived classes provide their own implementation.

// Two types of binding:

// Run time: The function call is resolved at runtime based on the actual object type. Virtual functions use late binding to enable runtime polymorphism.
// Compile time: The function call is resolved during compilation. Non-virtual functions use early binding, making function calls faster.

// Virtual functions use late means runtime or dynamic binding.

// Rules for Virtual Functions:

// Virtual functions are defined in the base class and can be overridden in derived classes (not mandatory; base version is used if not overridden).
// They must have the same prototype in base and derived classes.
// They are used through a base class pointer or reference to achieve runtime polymorphism.
// A class may have a virtual destructor in case of dynamic memory allocation, but never a virtual constructor.
// Virtual functions cannot be static, but they can be friend functions of another class.

#include "iostream"
using namespace std;

class Human
{
public:
    // void hello()
    // {
    //     cout << "I am Human!" << endl;
    // };
    void virtual hello()
    {
        cout << "I am Human!" << endl;
    };
};

class Male : public Human
{
public:
    void hello()
    {
        cout << "I am Male Human!" << endl;
    };
};

class Female : public Human
{
public:
    void hello()
    {
        cout << "I am Female Human!" << endl;
    };
};

int main()
{
    Human *baseClassPtr;
    baseClassPtr = new Male;
    baseClassPtr->hello(); // SHOULD EXECUTE MALE CLASS FUNCTION, BUT IT WILL NOT EXECUTE. WE WILL FIX THIS BY MAKING OUR BASE CLASS FUNCTION VIRTUAL

    baseClassPtr = new Female;
    baseClassPtr->hello(); // SHOULD EXECUTE FEMALE CLASS FUNCTION, BUT IT WILL NOT EXECUTE. WE WILL FIX THIS BY MAKING OUR BASE CLASS FUNCTION VIRTUAL

    return 0;
}
