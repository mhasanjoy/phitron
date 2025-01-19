#include<stdio.h>

int main()
{
    int a = 5, b = 13;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d and %d\n", a, b);

    return 0;
}
