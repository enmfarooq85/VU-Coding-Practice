// C++ Template Specialization

// Template specialization allows you to provide a custom implementation of a template for specific data types.

// There are two types:

// Complete (Full) Specialization
// Partial Specialization

// 1. Complete (Full) Specialization:

// A complete specialization provides a completely different implementation for one specific data type.

// #include <iostream>
// using namespace std;

// // Complete Specialization for int
// template <>
// class Display<int>
// {
// public:
//     void show()
//     {
//         cout << "Complete Specialization for int" << endl;
//     }
// };

// int main()
// {
//     Display<float> d1;
//     d1.show();

//     Display<int> d2;
//     d2.show();

//     return 0;
// }


// 2. Partial Specialization:

// A partial specialization specializes only part of the template parameters, while the remaining parameters stay generic.

// #include <iostream>
// using namespace std;

// // Partial Specialization for Pointer Types
// template <class T>
// class Display<T*>
// {
// public:
//     void show()
//     {
//         cout << "Partial Specialization for Pointer Type" << endl;
//     }
// };

// int main()
// {
//     Display<int> d1;
//     d1.show();

//     Display<int*> d2;
//     d2.show();

//     Display<float*> d3;
//     d3.show();

//     return 0;
// }