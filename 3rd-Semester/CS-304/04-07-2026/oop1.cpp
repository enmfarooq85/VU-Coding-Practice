// Without class template:

// #include <iostream>
// using namespace std;

// class IntBox {
// private:
//     int value;

// public:
//     IntBox(int v) {
//         value = v;
//     }

//     void display() {
//         cout << "Value = " << value << endl;
//     }
// };

// class FloatBox {
// private:
//     float value;

// public:
//     FloatBox(float v) {
//         value = v;
//     }

//     void display() {
//         cout << "Value = " << value << endl;
//     }
// };

// int main() {
//     IntBox obj1(10);
//     FloatBox obj2(3.14);

//     obj1.display();
//     obj2.display();

//     return 0;
// }

// With Class Template:

#include <iostream>
using namespace std;

// Class Template
template <class T>
class Box
{
private:
    T value;

public:
    Box(T v)
    {
        value = v;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{

    Box<int> obj1(100);

    Box<float> obj2(99.5);

    Box<double> obj3(123.456);

    Box<char> obj4('A');

    Box<string> obj5("ChatGPT");

    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();
    obj5.display();

    return 0;
}