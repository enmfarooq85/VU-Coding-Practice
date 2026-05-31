#include <iostream>
using namespace std;

class Test
{

public:
    int i;
    Test(int i = 0)
    {
        this->i = i;
    }

    friend ostream &operator<<(ostream &output, const Test &obj)
    {
        output << obj.i;
        return output;
    };

    friend istream &operator>>(istream &input, Test &obj)
    {
        input >> obj.i;
        return input;
    };
};

int main()
{
    Test t1(400);

    cout << "Current Value: "
         << t1 << endl;

    cout << "Enter New Value: ";

    cin >> t1;

    cout << "Updated Value: "
         << t1 << endl;

    return 0;
}