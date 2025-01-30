// structure
#include<stdio.h>
#include<string.h>

struct Student
{
    double weight;
    int roll;
    int marks[3];
    char name[10];
};

int main()
{
    struct Student s1 = {70.3, 13, {7, 13, 7}, "Joy"};
    printf("%d %s %lf [%d %d %d]\n", s1.roll, s1.name, s1.weight, s1.marks[0], s1.marks[1], s1.marks[2]);

    struct Student s2;
    s2.weight = 57.3;
    s2.roll = 13;
    s2.marks[0] = 7;
    s2.marks[1] = 13;
    s2.marks[2] = 7;
    strcpy(s2.name, "Joy");
    printf("%d %s %lf [%d %d %d]\n", s2.roll, s2.name, s2.weight, s2.marks[0], s2.marks[1], s2.marks[2]);

    // designated initialization
    struct Student s3 = {.roll = 13, .name = "Joy", .weight = 57.3, .marks = {7, 13, 7}};
    struct Student *ptr;
    ptr = &s3;
    printf("%d %s %lf [%d %d %d]\n", (*ptr).roll, ptr->name, ptr->weight, ptr->marks[0], ptr->marks[1], ptr->marks[2]);

    return 0;
}
