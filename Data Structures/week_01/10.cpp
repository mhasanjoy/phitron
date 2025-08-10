// dynamic object
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
};

int main()
{
    Student *s = new Student("A", 133013, 30, "X", "Y");
    // s->print_info();
    (*s).print_info();

    return 0;
}
