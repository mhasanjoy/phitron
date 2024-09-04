#include<stdio.h>

int main()
{
    int x, steps;
    scanf("%d", &x);
    steps = (x / 5) + (x % 5 != 0);
    printf("%d\n", steps);

    return 0;
}
