// Association vs Composition vs Aggregation

// https://medium.com/@emad-mohamed/association-vs-aggregation-vs-composition-vs-inheritance-3d63ac32ed92

#include <iostream>
#include <string>
#include <vector>

// Association:

class Student
{
public:
    std::string name;
    Student(std::string n) : name(n) {}
};

class Teacher
{
public:
    void teach(Student *s)
    {
        if (s)
            std::cout << "Teacher is teaching " << s->name << "\n";
    }
};

int main()
{
    Student s1("John");
    Teacher t1;

    t1.teach(&s1);
    return 0;
}

// Aggregation:

// class Teacher
// {
// public:
//     std::string name;
//     Teacher(std::string n) : name(n) {}
// };

// class Department
// {
// private:
//     // Aggregation: Holds pointers to objects managed elsewhere
//     std::vector<Teacher *> staff;

// public:
//     void addTeacher(Teacher *t) { staff.push_back(t); }
// };

// int main()
// {
//     Teacher *t1 = new Teacher("Dr. Smith");

//     Department cs;
//     cs.addTeacher(t1);

//     std::cout << t1->name << " is still here!\n";
//     delete t1;
//     return 0;
// }

// Composition:

// class Engine
// {
// public:
//     Engine() { std::cout << "Engine built.\n"; }
//     ~Engine() { std::cout << "Engine destroyed.\n"; }
//     void start() { std::cout << "Vroom! Engine started.\n"; }
// };

// class Car
// {
// private:
//     Engine engine; // Composition: Car HAS-A Engine
// public:
//     Car() { std::cout << "Car assembled.\n"; }
//     ~Car() { std::cout << "Car scrapped.\n"; }
//     void drive() { engine.start(); }
// };

// int main()
// {

//     std::cout << "--- Creating Car ---\n";
//     Car myCar;
//     myCar.drive();
//     std::cout << "--- Car going out of scope ---\n";
//     // Car and Engine are destroyed here
//     return 0;
// }
