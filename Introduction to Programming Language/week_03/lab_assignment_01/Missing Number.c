#include<stdio.h>

int main()
{
    int t, i, s, a, b, c;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d %d %d %d", &s, &a, &b, &c);
        printf("%d\n", s - a - b - c);
    }

    return 0;
}
