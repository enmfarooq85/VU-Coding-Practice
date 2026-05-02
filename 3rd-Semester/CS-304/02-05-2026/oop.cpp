// Accessor function and "this" pointer

// Accessor function is a member function that returns the value of a data member. while mutator function is a member function that sets the value of a data member.

#include <iostream>
using namespace std;

class Box
{
private:
    double length;

public:
    // accessor function to get the value of length
    double getLength()
    {
        return length;
    }

    // mutator function to set the value of length
    void setLength(double length)
    {
        this->length = length; // "this" pointer is used to refer to the current object
    }
};

int main()
{
    Box box;
    box.setLength(5.0);
    cout << "Length of the box: " << box.getLength() << endl;
    return 0;
}
