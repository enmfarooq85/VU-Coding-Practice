#include <iostream>
using namespace std;

// Multiple Type Argument:
// template <class K, class H>
// void print(K a, H b, K c)
// {
//     cout << a + b << endl;
// };

// User Defined Type:
// class Test {

// };

// Overloading and Templates:

// void display(int a, int b)
// {
//     cout << a + b << endl;
// };

// void display2(float a, float b)
// {
//     cout << a + b << endl;
// };

template <class K>
void print (K a, K b){cout << a + b << endl;};

int main()
{
    // print(10, 20.4, 30);
    // display(10, 20);
    // display2(1.0, 2.0);

    print(10, 20);
    print(1.0, 2.0);

    return 0;
}
