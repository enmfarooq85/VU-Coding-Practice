// Type conversion in cpp:

// built in data types & user defined data types

#include "iostream"
using namespace std;

// user defined data type
class Hello
{
private:
    int i;

public:
    Hello()
    {
        i = 10;
    }

    void show()
    {
        cout << i << endl;
    };
};

int main()
{
    // bulit in data type
    float i = 10.5;
    int j = i;

    cout << i << endl; // 10.5
    cout << j << endl; // 10

    // creating object with the class Hello
    Hello h1;
    h1.show(); // 10

    return 0;
}