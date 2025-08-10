// constructor & destructor
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

    Student() {}

    Student(string name, int roll, int age, string father_name, string mother_name)
    {
        this->name = name;
        this->roll = roll;
        this->age = age;
        this->father_name = father_name;
        this->mother_name = mother_name;
    }

    void print_info()
    {
        cout << name << " " << roll << " " << age << " " << father_name << " " << mother_name << "\n";
    }

    ~Student()
    {
        cout << "destructor ~ ";
        print_info();
    }
};

class Person
{
public:
    string name;
    Person *father, *mother;

    Person()
    {
        father = NULL;
        mother = NULL;
    }

    Person(string name, string father_name, string mother_name)
    {
        this->name = name;
        father = new Person;
        father->name = father_name;
        mother = new Person;
        mother->name = mother_name;
    }

    void print_info()
    {
        cout << name << " " << father->name << " " << mother->name << "\n";
    }

    ~Person()
    {
        cout << "destructor\n";
        if(father != NULL)
            delete father;
        if(mother != NULL)
            delete mother;
    }
};

int main()
{
    // Student s1("A", 133013, 30, "X", "Y");
    // s1.print_info();
    // Student s2;

    Person p("A", "X", "Y");
    p.print_info();

    return 0;
}

