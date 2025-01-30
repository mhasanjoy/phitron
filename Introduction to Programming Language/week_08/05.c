// centroid of a triangle
#include<stdio.h>

struct Point
{
    float x;
    float y;
};

struct Triangle
{
    struct Point A;
    struct Point B;
    struct Point C;
};

struct Point centroid(struct Triangle t)
{
    struct Point temp;
    temp.x = (t.A.x + t.B.x + t.C.x) / 3;
    temp.y = (t.A.y + t.B.y + t.C.y) / 3;
    return temp;
}

int main()
{
    struct Point p1 = {1, 1}, p2 = {4, 5}, p3 = {1, 5};
    struct Triangle t = {p1, p2, p3};
    struct Point c = centroid(t);

    printf("%0.2f %0.2f\n", c.x, c.y);

    return 0;
}
