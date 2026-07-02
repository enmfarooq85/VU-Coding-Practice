#include "iostream"
#include "string"
using namespace std;

class Person
{
public:
    int id;
    string name;

public:
    Person(int id, string name)
    {
        this->id = id;
        this->name = name;
    }

    // virtual function
    int virtual getId()
    {
        return id;
    };

    string virtual getName()
    {
        return name;
    }

    // pure virtual function
    virtual void display() = 0;
};

class Student : public Person
{
    float marks;

public:
    Student(int id, string name, float marks) : Person(id, name)
    {
        this->marks = marks;
    }

    void display()
    {
        cout << "Student Database: " << endl;
        cout << "Student ID: " << getId() << endl;
        cout << "Student Name: " << getName() << endl;
        cout << "Student Marks: " << marks << endl;
    };
};

class Teacher : public Person
{
    string qualification;

public:
    Teacher(int id, string name, string qualification) : Person(id, name)
    {
        this->qualification = qualification;
    }

    void display()
    {
        cout << "Teacher Database: " << endl;
        cout << "Teacher ID: " << getId() << endl;
        cout << "Teacher Name: " << getName() << endl;
        cout << "Teacher Qualification: " << qualification << endl;
    };
};

int main()
{
    // So moral of the story is Never use arrays polymorphically because location of elemetns in any array is calculated using array type and in polymorphism we have the liberty of changing child array to parent array that will result in erraneous calcualation of location of elements in array.

    // Person *p[2];
    // p[0] = new Student(21321, "Farooq", 9.9);
    // p[1] = new Teacher(34234, "Ahad", "MS");
    // p[0]->display();
    // cout << endl;
    // p[1]->display();

    Person *p;
    p = new Student(21321, "Farooq", 9.9);
    p->display();
    cout << endl;
    p = new Teacher(34234, "Ahad", "MS");
    p->display();

    return 0;
};