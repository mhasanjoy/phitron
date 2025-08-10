// array of class
// sort
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int age;

    Student() {}

    Student(string name, int roll, int age)
    {
        this->name = name;
        this->roll = roll;
        this->age = age;
    }

    void print_info()
    {
        cout << name << " " << roll << " " << age << "\n";
    }

    bool operator < (Student x)
    {
        return roll > x.roll;
    }
};

bool comp(Student x, Student y)
{
    return x.roll > y.roll;
}

int main()
{
    // Student s[10];
    // for(int i = 0; i < 10; i++)
    //     s[i] = Student("A", i, 30);
    // for(int i = 0; i < 10; i++)
    //     s[i].print_info();

    vector<Student> s;
    for(int i = 0; i < 10; i++)
        s.push_back(Student("A", i, 30));
    for(int i = 0; i < 10; i++)
        s[i].print_info();

    //sort(s.begin(), s.end(), comp);
    sort(s.begin(), s.end());
    cout << "Sorted: \n";
    for(int i = 0; i < 10; i++)
        s[i].print_info();

    return 0;
}
