// class
#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int age;
    string father_name;
    string mother_name;

    void print_info()
    {
        cout << name << " " << roll << " " << age << " " << father_name << " " << mother_name << "\n";
    }
};

class Person
{
public:
    string name;
    Person *father, *mother;

    void print_info()
    {
        cout << name << " " << father->name << " " << mother->name << "\n";
    }
};

int main()
{
    // Student s;
    // s.name = "joy";
    // s.age = 30;
    // s.print_info();

    Person p;
    p.father = new Person;
    p.mother = new Person;
    p.name = "A";
    p.father->name = "X";
    p.mother->name = "Y";
    p.print_info();

    return 0;
}
