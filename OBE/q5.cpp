#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string Name;
    int Age;
    string Address;

public:
    virtual void print() = 0;

    Person(string name, int age, string address)
    {
        Name = name;
        Age = age;
        Address = address;
    }

    void disp()
    {
        cout << " Name : " << Name << endl;
        cout << " Age : " << Age << endl;
        cout << " Address : " << Address << endl;
    }
};

class Teacher : public Person
{
public:
    string Course;
    int Salary;
    string Qualification;

    Teacher(string name, int age, string address, string course, int salary, string qualification)
        : Person(name, age, address)
    {
        Course = course;
        Salary = salary;
        Qualification = qualification;
    }
    void print()
    {
        disp();
        cout << "Course  :" << Course << endl;
        cout << "Salary  :" << Salary << endl;
        cout << "Qualification  :" << Qualification << endl;
    }
};

class Visiting_Faculty : public Teacher
{
public:
    string Specialization;
    int Teaching_hours;
    string Institute;

    Visiting_Faculty(string name, int age, string address, string course, int salary, string qualification, string specialization, int teaching_hours, string institute): Teacher(name, age, address, course, salary, qualification)
    {
        Specialization = specialization;
        Teaching_hours = teaching_hours;
        Institute = institute;
    }
    void print()
    {
        disp();
        Teacher::print();
        cout << "Specialization  :" << Specialization << endl;
        cout << "Teaching_hours  :" << Teaching_hours << endl;
        cout << "Institute  :" << Institute << endl;
    }
};

int main()
{
    Teacher T = Teacher("Arunesh", 35, "Delhi", "BSC", 50000, "Professor");
    Visiting_Faculty S = Visiting_Faculty("Arya", 30, "New Delhi", "BSC", 60000, "Associate Professor", "Python", 5, "ABC");

    Person *p1 = &T;
    Person *p2 = &S;

    p1->print();
    p2->print();

    return 0;
}