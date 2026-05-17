#include "bits/stdc++.h"
using namespace std;

// without operator overloading

// class Test
// {
// private:

//     int a;
//     int b;

// public:

//     Test(int a = 0, int b = 0)
//     {
//         this->a = a;
//         this->b = b;
//     }

//     Test add(Test temp)
//     {
//         temp.a += a;
//         temp.b += b;

//         return temp;
//     }

//     void display()
//     {
//         cout << "A = " << a
//              << " B = " << b << endl;
//     }
// };

// int main()
// {

//     Test t1(10, 20),
//          t2(20, 10),
//          t3(20, 13);

//     Test t4 = t1.add(t2.add(t3));

//     cout << "Without Operator Overloading Sum:" << endl;

//     t4.display();

//     return 0;
// }

// with operator overloading

#include "bits/stdc++.h"
using namespace std;

class Test
{
private:
    int a;
    int b;

public:
    Test(int a = 0, int b = 0)
    {
        this->a = a;
        this->b = b;
    }

    // + operator overloading
    Test operator+(Test temp)
    {
        temp.a += a;
        temp.b += b;

        return temp;
    }

    void display()
    {
        cout << "A = " << a
             << " B = " << b << endl;
    }
};

int main()
{

    Test t1(10, 20),
        t2(20, 10),
        t3(20, 13);

    Test t4 = t1 + t2 + t3;

    cout << "With Operator Overloading Sum:" << endl;

    t4.display();

    return 0;
}