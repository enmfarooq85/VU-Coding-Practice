// Polymorphism:

// In Object-Oriented Programming (OOP), polymorphism is the ability of different objects to respond to the same message or method call in their own unique way. Derived from Greek, the term literally means "many forms". It allows a single interface to represent different underlying data types, making code more flexible, reusable, and easier to maintain.

// Core Types of Polymorphism:

// Polymorphism is generally categorized into two main types based on when the behavior is determined:

// Compile-time Polymorphism (Static):

// The compiler determines which method to call during the compilation process.
// Method Overloading: Multiple methods in the same class have the same name but different parameters (e.g., add(int, int) vs add(double, double)).
// Operator Overloading: Redefining how operators (like + or *) behave with custom objects.

// Runtime Polymorphism (Dynamic):

// The specific method implementation to execute is decided while the program is running, based on the actual object type.
// Method Overriding: A child class provides a specific implementation for a method already defined in its parent class.
// Dynamic Method Dispatch: This occurs when a parent class reference (e.g., Animal) points to a child class object (e.g., Dog), and calling makeSound() triggers the dog's specific bark.

// Common Examples:

// Animal Sounds: An Animal base class has a makeSound() method. Subclasses like Dog, Cat, and Cow each override this method to return "Bark", "Meow", or "Moo" respectively.
// Shapes: A Shape class defines a draw() method. Classes like Circle, Square, and Triangle implement their own specific logic for how they should be drawn.
// Payments: A backend system might use a processPayment() method. Whether the object is CreditCard, UPI, or NetBanking, the same method name is called, but the underlying logic differs for each.

// Key Benefits:

// Code Reusability: You can write a single function that works with a broad category of objects (like a list of Vehicles) rather than writing separate functions for Cars, Bikes, and Boats.
// Flexibility: New classes can be added to a system with minimal changes to existing code, as long as they follow the established interface.
// Readability: It simplifies code by using consistent names for similar actions across different object types.

// Compile Time Polymorphism:

// Function overloading:

// #include <iostream>
// using namespace std;

// class Calculator {
// public:
//     // Overloaded method: adds two integers
//     int add(int a, int b) {
//         return a + b;
//     }

//     // Overloaded method: adds three integers
//     int add(int a, int b, int c) {
//         return a + b + c;
//     }

//     // Overloaded method: adds two doubles
//     double add(double a, double b) {
//         return a + b;
//     }
// };

// int main() {
//     Calculator calc;
//     cout << "Sum of 2 + 3: " << calc.add(2, 3) << endl;         // Calls add(int, int)
//     cout << "Sum of 1 + 2 + 3: " << calc.add(1, 2, 3) << endl;   // Calls add(int, int, int)
//     cout << "Sum of 2.5 + 3.5: " << calc.add(2.5, 3.5) << endl; // Calls add(double, double)
//     return 0;
// }

// Operator overloading

// #include <iostream>
// using namespace std;

// class Complex {
// private:
//     float real;
//     float imag;

// public:
//     Complex(float r = 0, float i = 0) : real(r), imag(i) {}

//     // Overloading the + operator
//     // This is resolved by the compiler at compile time
//     Complex operator + (const Complex& obj) {
//         Complex temp;
//         temp.real = real + obj.real;
//         temp.imag = imag + obj.imag;
//         return temp;
//     }

//     void display() {
//         cout << real << " + " << imag << "i" << endl;
//     }
// };

// int main() {
//     Complex c1(3.5, 2.5), c2(1.2, 4.3);
    
//     // The + operator now works for Complex objects
//     Complex c3 = c1 + c2; 
    
//     c3.display(); // Output: 4.7 + 6.8i
//     return 0;
// }


// Runtime polymorphism:

// Virtual functions 

#include <iostream>
using namespace std;

class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        cout << "Animal makes a generic sound." << endl;
    }
};

class Dog : public Animal {
public:
    // Redefining the base class function
    void makeSound() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog myDog;
    Cat myCat;

    // Point to Dog object
    animalPtr = &myDog;
    animalPtr->makeSound(); // Output: Dog barks.

    // Point to Cat object
    animalPtr = &myCat;
    animalPtr->makeSound(); // Output: Cat meows.

    return 0;
}
