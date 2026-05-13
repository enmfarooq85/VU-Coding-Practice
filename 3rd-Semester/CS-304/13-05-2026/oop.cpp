// Operator overloading

// Simply means that adding extra features to the existing operators like plus, minus so that they can work with user defined types.

#include "iostream"
using namespace std;

class Channel
{
    int followers;

public:
    Channel(int s)
    {
        followers = s;
    }

    // pre increment operator
    void operator++()
    {
        followers++;
    };

    // post increment operator
    void operator++(int)
    {
        followers++;
    };

    void show()
    {
        cout << followers << endl;
    }
};

int main()
{

    Channel mameewin(113000);
    ++mameewin;      // 113001
    mameewin.show(); // 113001
    mameewin++;      // 113001
    mameewin.show(); // 113002

    return 0;
}