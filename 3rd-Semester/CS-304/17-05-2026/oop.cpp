// Practice Session:

// Stream insertion and extraction overloading operator

#include "iostream"
#include "string"
using namespace std;

class Test
{
private:
    string name;

public:
    Test()
    {
        name = "Muhammad Farooq";
    };

    friend ostream &operator<<(ostream &output, Test &temp)
    {
        output << "Please enter your name: " << endl;
        return output;
    };

    friend istream &operator>>(istream &input, Test &temp)
    {

        input >> temp.name;
        cout << "Your input name is: " << temp.name << endl;
        return input;
    }
};

int main()
{
    Test t1;
    //  cin >> t1; // without overloading it gives you error because cin doesn't know how to process with object it normally works with variables.
    cout << t1; // Please enter your name: 
    cin >> t1;  // input from the user...

    return 0;
}