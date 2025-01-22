#include<stdio.h>

int main()
{
    int n, l, r, i, j, min = 0, max = 0;
    scanf("%d %d %d", &n, &l, &r);

    for(i = 1, j = 1; i <= l; i++, j *= 2)
        min += j;
    min += (n - l);

    for(i = 1, j= 1; i <= r; i++, j *= 2)
        max += j;
    max += (j / 2) * (n - r);

    printf("%d %d\n", min, max);

    return 0;
}
