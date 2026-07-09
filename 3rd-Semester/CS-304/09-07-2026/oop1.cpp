#include "iostream"
using namespace std;

// declaring class B:
void show();

template <class T>
class A
{
public:
    static T data;
    A()
    {
        data++;
    };
};

template <class T>
T A<T>::data = 1;

int main()
{
    A<int> a1[10];
    cout << a1[10].data << endl;

    return 0;
}