// Generic Programming:

// Generic Programming is a programming paradigm, that allows us to write type-independent code using templates. It enables a single function or class to work with different data types, improving code reusability and reducing code duplication.

// Without Generic Programming:

// Problem:

// Two separate functions are needed.
// If you want to compare double, char, etc., you must write more functions.
// Code duplication.

// #include <iostream>
// using namespace std;

// int maximum(int a, int b)
// {
//     return (a > b) ? a : b;
// }

// float maximumFloat(float a, float b)
// {
//     return (a > b) ? a : b;
// }

// int main()
// {
//     cout << maximum(10, 20) << endl;
//     cout << maximumFloat(5.5, 8.2) << endl;

//     return 0;
// }


// With Generic Programming:

// How it Works?

// T is a placeholder for any data type.
// The compiler automatically replaces T with the actual type.

#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout << maximum(10, 20) << endl;
    cout << maximum(5.5, 8.2) << endl;
    cout << maximum('A', 'Z') << endl;

    return 0;
}
