#include<stdio.h>

int main()
{
    int a, b, c;
    int *x = &a, *y = &b, *z = &c;
    scanf("%d %d %d", x, y, z);

    printf("%d\n", *x + *y + *z);

    return 0;
}
