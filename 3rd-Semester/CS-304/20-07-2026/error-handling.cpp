// Techniques for Error Handling in C++

// 1. Abnormal Termination
// - The program stops immediately when an error occurs.
// - Example: exit(), abort().

// 2. Graceful Termination
// - The program terminates safely after displaying an error message
//   or performing cleanup operations.

// 3. Returning an Illegal Value
// - A function returns a special value indicating failure.
// - Example: -1, nullptr, or an empty string.

// 4. Returning an Error Code
// - A function returns an error code to indicate what went wrong.
// - Example: 0 = Success, 1 = Invalid Input, etc.

// 5. Exception Handling
// - Errors are handled using try, throw, and catch blocks.
// - Recommended for modern C++ programs.

// 1. Abnormal Termination

// #include <iostream>
// #include <cstdlib>
// using namespace std;

// int main()
// {
//     cout << "Fatal Error!\n";
//     exit(1);      // Terminates the program.

//     cout << "This will never execute.";
// }

// 2. Graceful Termination

// #include <iostream>
// using namespace std;

// int main()
// {
//     int age;

//     cout << "Enter age: ";
//     cin >> age;

//     if (age < 0)
//     {
//         cout << "Invalid age entered.\n";
//         return 0;
//     }

//     cout << "Valid age.\n";

//     return 0;
// }

// 3. Returning an Illegal Value

// #include <iostream>
// using namespace std;

// int divide(int a, int b)
// {
//     if (b == 0)
//         return -1; // Illegal value

//     return a / b;
// }

// int main()
// {
//     cout << divide(10, 0);

//     return 0;
// }

// 4. Returning an Error Code

// #include <iostream>
// using namespace std;

// int checkAge(int age)
// {
//     if (age < 0)
//         return 1;

//     if (age > 120)
//         return 2;

//     return 0;
// }

// int main()
// {
//     int result = checkAge(-5);

//     if (result == 1)
//         cout << "Invalid age.\n";
//     else if (result == 2)
//         cout << "Age is too large.\n";
//     else
//         cout << "Valid age.\n";

//     return 0;
// }

// 5. Exception Handling

// #include <iostream>
// using namespace std;

// double divide(double a, double b)
// {
//     if (b == 0)
//         throw "Division by zero is not allowed.";

//     return a / b;
// }

// int main()
// {
//     try
//     {
//         cout << divide(10, 0);
//     }
//     catch (const char* message)
//     {
//         cout << message;
//     }

//     return 0;
// }