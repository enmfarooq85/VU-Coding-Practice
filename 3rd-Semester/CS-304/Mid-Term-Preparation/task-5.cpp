#include <iostream>
using namespace std;

class Test
{
private:
    int value;

public:
    Test(int v = 0)
    {
        value = v;
    }

    // Pre-Increment
    Test& operator++()
    {
        ++value;
        return *this;
    }

    // Post-Increment
    Test operator++(int)
    {
        Test temp = *this;
        value++;
        return temp;
    }

    // Pre-Decrement
    Test& operator--()
    {
        --value;
        return *this;
    }

    // Post-Decrement
    Test operator--(int)
    {
        Test temp = *this;
        value--;
        return temp;
    }

    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    Test t1(10);

    cout << "Initial Value: ";
    t1.display();

    ++t1; // Pre-Increment
    cout << "After ++t1 : ";
    t1.display();

    t1++; // Post-Increment
    cout << "After t1++ : ";
    t1.display();

    --t1; // Pre-Decrement
    cout << "After --t1 : ";
    t1.display();

    t1--; // Post-Decrement
    cout << "After t1-- : ";
    t1.display();

    return 0;
}