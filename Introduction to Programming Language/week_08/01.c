// return multiple values from a function
#include<stdio.h>

void func(int x, int y, int *p, int *q)
{
    *p = x > y ? x : y;
    *q = x < y ? x : y;
}

int main()
{
    int a = 7, b = 13, large, small;
    func(a, b, &large, &small);
    printf("%d %d\n", large, small);

    return 0;
}
