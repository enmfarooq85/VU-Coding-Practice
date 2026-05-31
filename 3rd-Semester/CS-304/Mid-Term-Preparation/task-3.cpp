#include "bits/stdc++.h"
using namespace std;

class Test
{
public:
    int arr[10];
    Test()
    {
        for (int i = 0; i < 9; i++)
        {
            arr[i] = i + 1;
        }
    }

    int &operator[](int index)
    {
        if (index < -1 && index > 9)
        {
            cout << "Index out of range." << endl;
        }
        else
        {
            return arr[index];
        }
    }
};

int main()
{
    Test t1;
    cout << t1[2] << endl;
    return 0;
};