#include "bits/stdc++.h"
using namespace std;

// subcript operator overloading...

// class Hello
// {
// private:
//     int arr[10];

// public:
//     Hello()
//     {
//         for (int i = 0; i < 10; i++)
//         {
//             arr[i] = i;
//         }
//     }

//     int &operator[](int index)
//     {
//         if (index < 10)
//         {
//             return arr[index];
//         }
//         else
//         {
//             cout << "Given index is out of bound: " << endl;
//             exit(0);
//         }
//     }
// };

// int main()
// {

//     Hello h1;
//     cout << h1[2] << endl;
//     cout << h1[22] << endl;

//     return 0;
// }

// functin operator overloading...

// we do function operator overloading so that object behave like funcitons...

class Hello1
{
private:
    int age;
    string name;

public:
    Hello1()
    {
        age = 0;
        name = "";
    }

    Hello1(int a, string n)
    {
        age = a;
        name = n;
    }

    Hello1 operator()(int a, string n)
    {
        Hello1 temp;
        temp.age = a;
        temp.name = n;

        return temp;
    }

    void show()
    {
        cout << "Age: " << this->age << "Name: " << this->name << endl;
    }
};

int main()
{
    Hello1 h1(22, "Asad"), h2;

    h1.show();
    h2 = h1(12, "Abdul");
    h2.show();
    return 0;
}