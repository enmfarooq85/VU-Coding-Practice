// Practice:

#include "iostream"
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v = 0)
    {
        value = v;
    }

    // i am overloading the plus operator so that i can add objects

    Number operator+(Number obj)
    {
        Number temp;

        temp.value = obj.value + value;
        return temp;
    }

    void show()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Number n1(45);
    Number n2(55);
    Number n3 = n1 + n2; // 100

    n3.show();
    return 0;
}