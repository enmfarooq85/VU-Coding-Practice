// Type of Inheritance:

// public:

// public remains public
// private cannot access directly
// protected remains protected

// private:

// public become private
// private cannot access directly
// protected remains protected

// protected:

// public become protected
// private cannot access directly
// protected remains protected

#include "iostream"
using namespace std;

class A
{
private:
    int b;

protected:
    int c;

public:
    int a;
    void getData()
    {
        cout << "Hello!" << endl;
    };
};

// public inheritace:
class B : public A
{
};

// private inheritace:
class C : private A
{
};

// protected inheritace:
class D : protected A
{
};

int main()
{

    return 0;
}
