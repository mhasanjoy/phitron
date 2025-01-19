#include<stdio.h>

int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);

    if(m < n)
        m += 24;

    for(i = n; i <= m; i++)
        printf("%d ", i % 24);

    printf("\n");

    return 0;
}
