#include <iostream>
using namespace std;

// function operator overloading means that object called like function
class Test
{
public:

    void operator()()
    {
        cout << "Object is behaving like a function" << endl;
    }
};

int main()
{
    Test t1;

    t1();   // Function call syntax

    return 0;
}