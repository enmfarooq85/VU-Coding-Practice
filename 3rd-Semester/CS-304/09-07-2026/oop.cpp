#include "iostream"
using namespace std;

// declaring class B:
class B;

template <class T>
class A
{
private:
    T data;
public:
    friend B;
};

class B
{
    A<int> a1;
    A<float> a2;

public:
    void display()
    {
        a1.data = 10;
        a2.data = 10.3;

        cout << a1.data << endl;
        cout << a2.data << endl;
    }
};

int main()
{
    B b1;
    b1.display();
    return 0;
}