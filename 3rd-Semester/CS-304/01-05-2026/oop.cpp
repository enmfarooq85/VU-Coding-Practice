// Inheritance:-

// Inheritance is a fundamental OOP mechanism where a new class (subclass/child) derives properties and behaviors (methods/fields) from an existing class (superclass/parent). It promotes code reusability, reduces redundancy, and establishes an "IS-A" relationship, such as a Car (child) being a Vehicle (parent).

// Key Concepts and ExamplesCode Reusability:

// Instead of redefining features, a child class inherits them, allowing developers to focus on new functionalities.
// "IS-A" Relationship: A Dog class inherits from Animal, meaning a "Dog IS-A Animal".
// Hierarchy: Creates organized class structures, such as a Shape base class with Circle and Rectangle subclasses.
// Method Overriding: A subclass can replace the implementation of a method provided by the superclass to create specific behavior.

// Types of InheritanceSingle:

// One child inherits from one parent.
// Multiple: A class inherits from more than one class.
// Multilevel: A child inherits from a parent, which itself is a child of another parent.
// Hierarchical: Multiple subclasses inherit from one superclass.
// Hybrid: A combination of two or more types.

// Why Use InheritanceMaintainability:

// Changes to the parent class automatically update child classes.
// Scalability: Facilitates the expansion of software by adding new, specialized subclasses without altering existing, working code.
// Polymorphism: Allows treating subclasses as their parent type, enabling more flexible code.

// Mode of inheritance:

// Base Class Mode ---       Derived Class Mode
// ---          --- public --- private --- protected 
// public       --- public     private     protected
// private      --- not herited    not herited     not herited
// protected    --- protected  private     protected

#include "iostream"
#include "string"
using namespace std;

// Single Inheritance

// class Parent {
// public:
//     void show() {
//         cout << "Parent class\n";
//     }
// };

// class Child : public Parent {
// };

// Multilevel Inheritance

// class Grandparent {
// public:
//     void show() {
//         cout << "Grandparent class\n";
//     }
// };

// class Parent : public Grandparent {
// };

// class Child : public Parent {
// };

// Multiple Inheritance

// class A
// {
// public:
//     void showA()
//     {
//         cout << "Class A\n";
//     }
// };

// class B
// {
// public:
//     void showB()
//     {
//         cout << "Class B\n";
//     }
// };

// class C : public A, public B
// {
// };

// Hierarchical Inheritance

// class Parent
// {
// public:
//     void show()
//     {
//         cout << "Parent class\n";
//     }
// };

// class Child1 : public Parent
// {
// };
// class Child2 : public Parent
// {
// };

// Hybrid Inheritance (Diamond Problem)
class A
{
public:
    void show()
    {
        cout << "Class A\n";
    }
};

class B : public A
{
};
class C : public A
{
};

// class B : virtual public A
// {
// };
// class C : virtual public A
// {
// };

class D : public B, public C
{
};

int main()
{
    // Child c;
    // c.show();

    // Child c;
    // c.show();

    // C obj;
    // obj.showA();
    // obj.showB();

    // Child1 c1;
    // Child2 c2;
    // c1.show();
    // c2.show();

    // Hybrid cause diamond problem in order to solve this we use virtual inheritance.
    D obj;
    // obj.show();

    return 0;
}