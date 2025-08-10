// access modifier
#include<iostream>
using namespace std;

class User
{
protected:
    string name;
    int age;
};

class Admin: User
{
private:
    string designation;
public:
    void set_info(string name, int age, string designation)
    {
        this->name = name;
        this->age = age;
        this->designation = designation;
    }

    void print_info()
    {
        cout << name << " " << age << " " << designation << "\n";
    }
};

int main()
{
    Admin ad;
    ad.set_info("A", 30, "admin");
    ad.print_info();

    return 0;
}
