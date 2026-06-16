#include "iostream"
using namespace std;

class Base
{
    // public:
protected:
    void showRollNo()
    {
        cout << "My roll numer is 4532" << endl;
    };
};

class Child : public Base
{
public:
    void showRollNumber()
    {
        showRollNo();
    }
};

// Disadvantages of protected members:
// breaks encapsulation:

// We can use derived class object where base class object is required as derived class object has implicit base class object also but the reverse of this statement is not true, we can not use base class object where derived class object is required because if we create base class it will only have base part not its derived class part.

int main()
{
    Child child;

    child.showRollNumber(); // My roll no is 4532

    return 0;
};