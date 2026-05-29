// Lectrue 01:-

// What is object orintation?

// It is a technique in which we visualize our programming problems in the form of objects and their interactions as happens in real life.

// Example:

// Suppose we want to develop a fee collection system for a school for this we will need to find out related objects and their interactions as happens in real life.

// What is object?

// Object can be tangible or intangible which have certain attributes and behaviors.

// What is model?

// Model is an abstraction of something real or conceptual.

// Example:

// Highway Maps
// Mechanical Models

// Object Oriented Models:

// An object-oriented model (OOM) is a conceptual framework that visualizes, specifies, constructs, and documents a system by structuring it around real-world "objects" that combine both data and behavior.

// Advantage OOP:

// We can easily develop, understand and implement it using OOPLs.

// Summary:

/*
• Model is the abstraction of some real word scenario. It helps us to understand
that scenario.
• Object oriented model of any scenario (problem) describes that scenario
(problem) in the form of interacting objects.
• We use Object Orientation because it helps us in mapping real world problem
in a programming language.
• Object Orientation is achieved using objects and their relationships.
• Properties of an object are described using its data members and behavior of an
object is described using its functions.
• Objects may be tangible (physical) or intangible (also called conceptual or
virtual).
• Generally when we have given a certain problem description, nouns in that
problem description are candidates for becoming objects of our system.
• There may be more than one aspects of an object
• It is not necessary that every object has a specific role in implementation of a
problem there may be some objects without any role, like school parking in
our school.
• It is easier to develop programs using Object Oriented Programming because
it is closer to real life.

*/

// Lectrue 02:-

// Information hiding:

// Information hiding is one of the concept inspired from real life which says that all information should be not accessible to the all persons. It means that showing only necessary details to the outside world and all other details should remain private.

// Advantages of information hiding:

// It simplifies our object oriented mode.
// It is a barrier against change propogation.

// Information hiding is implemented using the Encapsulation and Abstraction.

// Encapsulation:

// Encapsulation means that encapsulating the attributes and behaviors in one unit.

// Advantages of Encapsulation:

// Better clarity and simplicity
// Less complexity
// Better understanding

// Interface:

// Interface is a set of functions of an object that he want to expose to other objects. It is necessary for a function to execute the communication.

// How to implement interface in the object?

// We need data stuructres to hold data and functions to set required behavior.

// like take the example of contact details saved in the SIM of a phone, In that case we can say physical structure of SIM card as Data Structure And Read/write operations provided by the phone as Functionality.

// Message:

// Objects communicate through messages they send messages (stimuli) by invoking appropriate operations on the target object. The number and kind of messages that can be sent to an object depends upon its interface.

// A Person sends message (stimulus) “stop” to a Car by applying brakes.
// A Person sends message “place call” to a Phone by pressing appropriate button.

// 02.7. Summary

/*
• Information hiding is achieved through encapsulation.
• Encapsulation and Information Hiding are related to each other.
• Interface of an object provides us the list of available functions.
• An object may have more than one interface.
• Interface and implementation are separated from each other to achieve
Information Hiding.
• Objects communicate with each other using messages.
*/

// Lecture NO. 3:-

// What is abstraction?

// Abstraction is way to hide complex implementation details while exposing only the essential features of an object. Through this we able to simplify the things.

// Example:

// Think of a coffee machine. You only need to know how to press the "Brew" button and insert your coffee beans. You don't need to understand the internal valves, water heating elements, or electrical circuits. The complex mechanics are hidden, leaving a simple interface for you to use.

// Class:

// Class is a blueprint of the object. Like we have to consturct a house so we need map.

// Example:

// • Ahsan teaches mathematics
// • Aamir teaches computer science
// Each one is a teacher so we say these objects are instances of the Teacher class

// Inheritance:

// Inheritance is way to inherit the charactersics like in real life. In real life, a child inherit characterstics from the parent beside this he/she has own unique charactersics. In OOP, child class inherit characterstics from the parent class but children class has also its own unique characterstics.

// Inheritance is a kind of realtionship.

// Inheritance – Advantages
// • Reuse
// • Less redundancy
// • Increased maintainability

// Lecture NO. 4:-

// What is generalization?

//  In OO models, some classes may have common characteristics. We extract these features into a new class and inherit original classes from this new class.

// What is subtyping?

// Sub-typing means that derived class is behaviourally compatible with thebase class. Derived class has all the characteristics of base class plus some extra characteristics. Behaviourally compatible means that base class can be replaced by the derived class

// Subtyping and generalization are related concepts, Subtyping (extension) and generalization is a way to look same thing in two ways.Sub typing is looking at things from Top to bottom whereas in generalization we look at things from bottom to top.

// What is Specialization (Restriction)?

// Specialization means that derived class is behaviourally incompatible with the base class. Behaviourally incompatibility means that base class can’t always be by the derived class. Derived class has some different of restricted characteristics than of base class.

// What is overriding?

// A class may need to override the default behaviour provided by its base class Derived class overrides the behaviour of its base class.

// Reasons for overriding:

// • Provide behaviour specific to a derived class (specialization)
// • Extend the default behaviour (extension)
// • Restrict the default behaviour (restriction)
// • Improve performance
// • It is used for the implementation of inheritance.

// Difference between concrete and abstract class?

//  abstract classes cannot be instantiated and serve as blueprints for other classes, while concrete classes are fully implemented and can be used to create objects directly.

// Lecture NO. 5:-

// What is multiple inheritance?

// Sometimes we want to reuse characteristics of more than one parent class, in that case we need to inherit a class from more than one classes.

// Example:

// Consider the example of an imaginary specie Mermaid used in fairy tales that lives in water having features both of a women as well as of a fish, In Object Oriented programming perspective Mermaid can be derived from two classes Women and Fish.

// Coding implementation:

#include "bits/stdc++.h"
using namespace std;

class Fish
{
public:
    void swim()
    {
        cout << "Swimming: " << endl;
    };
};

class Women
{
public:
    void walk()
    {
        cout << "Walking: " << endl;
    };
};

// Now, mermaid is taking characterstics from two classes named fish and women. This is called multiple inheritance.
class Mermaid : public Women, public Fish
{
};

int main()
{
    // now mermaid can walk and swim
    Mermaid m1;
    m1.swim();
    m1.walk();

    return 0;
}

// Advantage of implementing multiple inheritance:

// Reduce redundancy

// Disadvantages of implementing multiple inheritance:

// • Increased complexity
// • Reduce undderstanding
// • Duplicate feature

// Multiple inheritance arise ambiguity and classic diamond problem. Please see code from internet.

// What is assoication?

// Interaction of different objects in OO model (or in problem domain) is known as association.

// Kind of Association:

// 1. Class association
// 2. Object Association

// What is class association?

// Class association is implemented in terms of Inheritance. Inheritance implements generalization/specialization relationship between objects. Inheritance is considered class association.

// What is object association?

// It is the interaction of stand alone objects of one class with other objects of another class.

// It can be of one of the following types.

// • Simple Association
// • Composition
// • Aggregation

// What is simple association?

// The two interacting objects have no intrinsic relationship with other object. It is the weakest link between objects. It is a reference by which one object can interact with some other object.

// Example:

// Customer gets cash from cashier.
// Employee works for a company.
// Ali lives in a house.
// Ali drives a car.

// Kinds of simple association:

// With respect to direction (Navigation)
// With respect to number of objects (Cardinality)

// Kind of simple association with respect to Navigation

// One way Association
// Two way Association

// What is one way association?

// In One way association we can navigate along a single direction only, it is denoted by an arrow towards the server object.

// What is two way association?

// In two way association we can navigate in both directions, it is denoted by a line between the associated objects.

// Kind of simple association with respect to cardinality:

// Binary Association
// Ternary Association
// N-array Association

// What is binary association?

// It associates objects of exactly two classes; it is denoted by a line, or an arrow between the associated objects.

// What is Ternary association?

// It associates objects of exactly three classes; it is denoted by a diamond with lines connected to associated objects.

// What is N-ary association?

// An association between 3 or more classes its practical examples are very rare.

// What is composition?

// An object may be composed of other smaller objects, the relationship between the “part” objects and the “whole” object is known as Composition, Composition is represented by a line with a filled-diamond head towards the composer object.

// Composition is stronger relationship:

// Composition is a stronger relationship, because
// Composed object becomes a part of the composer
// Composed object can’t exist independently

// What is Aggregation?

// An object may contain a collection (aggregate) of other objects, the relationship between the container and the contained object is called aggregation, Aggregation is represented by a line with unfilled-diamond head towards the container.

// Aggregation is weaker relationship:

// • Aggregate object is not a part of the container
// • Aggregate object can exist independently

// Lecture No. 6:-

// What is class compatible?

// A class is behaviorally compatible with another if it supports all the operations of the other class. Such a class is called subtype. A class can be replaced by its subtype.

// What is Polymorphism?

// In general, polymorphism refers to existence of different forms of a single entity.

// Example:

// both Diamond and Coal are different forms of Carbon.

// What is Polymorphism in OO Model?

// In OO model, polymorphism means that different objects can behave in different ways for the same message (stimulus). Consequently, sender of a message does not need to know exact class of the receiver. Sender sends message to receiver and appropriate method is called on receiver side.

// Lecture NO. 7:-

// What is class?

// It is a way (Mechanism) given by c++ to realize objects in a program. It is concrete implementation of objects in c++. We capture any object attributes and behaviour in a programming language using classes. In other words it can be defined as facility given by c++ to create new types according to our requirement. (Class is composite data type made from basic c++ types like integers, chars and float).

// Example:

// Consider the examples of entity lion there are many lions but all lions will have similar attributes and behaviour.
// Similarly consider student object all students have separate existence but all students have similar attributes and they exhibit similar behaviour.

// Type in C++:

// We have to model generic concept of Student. But there is no built in type student in c++ like built-in c++ type’s int or float. Class is mechanism in c++ that will allow us to define student as user defined type, similarly generic concept circle will also be implemented in the same way.

// User define types will be,
// • Student in student management system
// • Circle in a drawing software

// How manay ways to create user defined types in the cpp?

// • Through Structure
// • Through Class

// Why member functions are introduced in the class?

// They model the behaviors of an object.

// Declaring class variable:

// class keyword ClassName
class Human
{
};

// How can we access members of class in cpp?

// • Using Dot operator
// • Using Arrow operator to access from pointer to object

// What are access specifiers?

// Access specifiers are used to enforce restrictions to member and behavior of class.

// • public: things become accessable everywhere
// • private: accessable within the class
// • protectd: acccessable within and inherited class

// Note: Default access specifier of class is private.

// Lecture No. 08:-

// Function defination inside the class:

class Human1
{
private:
    void print() { cout << "Hello from Human1 inside the class: " << endl; }
};

// Function defination outside the class:

class Human2
{
private:
    void print() {};
};

void Human2::print()
{
    cout << "Hello from Human2 outside of the class: " << endl;
}

// What are inline functions?

// • Inline functions is a way used by compilers to improve efficiency of theprogram, when functions are declared inline normal process of function calling (using stack) is not followed instead function code is added by compiler at all points where these functions have been called. Basic concept behind inline functions is that they are functions in our code but in compiler generated files these functions code is added by compiler at all places where they were called in the code.

// • Normally small size functions that need to be called many times duringprogram execution are declared inline. Inline functions decrease the code execution time because program in their case doesn’t involve function call overhead.
// • Keyword ‘inline’ is used to request compiler to make a function inline.
// • However using inline keyword with function doesn’t guarantee that function will definitely in inlined, it depends on the compiler if it finds it can make function inline it does so otherwise it ignores the keyword inline and treat the function as normal function.

// Code

inline int Area(int len, int height)
{
    return len * height;
}

int main()
{
    cout << Area(3, 4) << endl; // 12
    return 0;
}

// Note: Every function inside the class is inline, but outside function we must use inline keyword to make our function inline.

// What is constructor?

// Constructor is used to initiliaze the objects of the class. Constructor is used to ensure that object is well defined state at the time of creation. the constructor of a class is automaticlaly generated by compiler however we can write by our self also. Constructor is auto called when the object is created. Constructors aren't usually called explicitly by us.

// Characterstics of Constructors:

// • Constructor is a special function having same name as the class name
// • Constructor does not have return type
// • Constructors are commonly public members

// Default constructor:

// • Constructor without any parameter or with all parameters with default values is called default constructor
// • If we do not define a default constructor the compiler will generate a default constructor
// • Compiler generated default constructor is called implicit and user written default constructor is called explicit
// • This compiler generated default constructor initialize the data members to their default values
// • If we have given any constructor for a class whether it is
// • our own explcit default constructor ( i.e parameterless or with parameters having default values ) or our own constructor with parameters

// Code:

class Hello
{
public:
    int i;
    // default constructor
    Hello()
    {
        i = 0;
    };
    // parameterized constructor
    Hello(int i)
    {
        this->i = i;
    }

    // overloading constructor
    // with two parameters
    Hello(int i, string name)
    {
        this->i = i;
        cout << name << endl;
    }

    // with three parameters
    Hello(int i, string name, string fatherName)
    {
        this->i = i;
        cout << name << fatherName << endl;
    }

    // Copy Constructor

    Hello(const Hello &old)
    {
        this->i = old.i;
    };
};

int main()
{
    Hello h1;
    Hello h2 = h1;
    return 0;
}

// While copying shallow and deep copy concept comes in. Please understand it.

// Lecture NO. 09:-

// Copy constructor:

// 09.3. Important points about copy constructor:
// 1. In case our class doesn’t involve dynamic memory then default copy constructor that performs shallow copy works fine.
// 2. In case our class has any data member involving dynamic memory we have to write our own code in copy constructor to perform deep copy.
// 3. Copy constructor is normally used to perform deep copy
// 4. If we do not make a copy constructor then the compiler performs shallow copy
// 5. Shallow copy performs bitwise copy.

// What is Desctructor?

// 1. Destructor is used to free memory that is allocated through dynamicallocation. We have to free memory allocated using new operator by over self in destructor otherwise it remain occupied even after our program ends.
// 2. Destructor is used to perform house keeping operations.
// 3. Destructor is a function with the same name as that of class, but preceded with a tilde ‘~’.

class Hello1
{
public:
    ~Hello1()
    {
        cout << "I am destructor: " << endl;
    };
};

// Destructors cannot be overloaded.

// Sequence of Calls:

// Constructors and destructors are called automatically
/// Constructors are called in the sequence in which object is declared
// Destructors are called in reverse order

// What are accessor function?

// In accordance to principle of information hiding data members of a class are declared as private so that outside world can not access the private data of the object only an interface is provided to outside world in the form of functions.
// Accessor functions are also used to access private data of the object, we provide accessor functions to get and set private data members of the class. We also add error checking code in accessor functions to reduce errors so that object doesn’t move in illegal state.

// What is 'this pointer' ?

// • Function space is common for every variable
// • Whenever a new object is created:
//  o Memory is reserved for variables only
//  o Previously defined functions are used over and over again

// Lecture No. 10:-

// Uses of this Pointer:

// There are situations where designer wants to return reference to current object from a function
//  In such cases reference is taken from this pointer like (*this)

// Separation of interface and implementation:

// Public member functions exposed by a class are called interface.
// Separation of implementation from the interface is good software engineering.

// Advantages:

// User is only concerned about ways of accessing data (interface)
// User has no concern about the internal representation and implementation of the class

// const member function

// Some functions in our programs are general purpose functions to show or access data, they are supposed to do read only tasks only however there are chances that they can change the state of data members of the class while accessing the data members due to programming mistake, c++ provides the solution of this problem using constant member functions.

// Note:- Skipping to write the Lecture No. 11 and 12 here. I have studied them but don't have enough time to write here.

// Lecture No. 13:-

// Pointer to Objects:

// • Pointer to objects are similar as pointer to built-in types
// • They can also be used to dynamically allocate objects

// Code Implementation:

class Student
{
private:
    int rollNo;

public:
    Student()
    {
        rollNo = 0;
    };
    Student(int aName) {
    };
    void setRollNo(int aNo)
    {
        this->rollNo = aNo;
    };
};

int main()
{
    Student obj;
    Student *ptr;
    ptr = &obj;
    ptr->setRollNo(10);
    return 0;
}

// new operator is also used to creat object at runtime

// Create a class Date to set, get the date, add month, year, etcc. See the lectrue no. 13 from handouts.

// Lecture NO. 14:-

// Composition:

// If one object is part of another object (relationship of part and whole) in composition lifetime of one object depends upon the other. The part objects are essential components of the whole. For example person is composed of hands, eyes, feet so on.

// In C++ “it is all about code reuse”
// Composition is Creating objects of one class inside another class
// “Has a” relationship:

// Example:-

// Bird has a beak
// Student has a name

// Just study composition, constructors, desctructors and composed objects concept.
