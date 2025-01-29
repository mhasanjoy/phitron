#include<stdio.h>

int main()
{
    int x, y;
    int *p = &x, *q = &y;
    scanf("%d %d", p, q);
    printf("%f\n", (*p + *q) / 2.0);

    return 0;
}
