#include <iostream>
using namespace std;

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

    Box(const Box<T> &obj)
    {
        value = obj.value;
        cout << "Copy Constructor Called" << endl;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{

    // Box<int> obj1(100);
    // Box<float> obj2 = obj1; // Error, while copying objects type must be same.

    Box<int> obj1(100);
    Box<int> obj2 = obj1;

    obj1.display();
    obj2.display();

    return 0;
}