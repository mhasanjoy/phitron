#include<stdio.h>

void solution();

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solution();

    return 0;
}

void solution()
{
    int n, i;
    scanf("%d", &n);
    for(i = 2; i <= n + 1; i++)
        printf("%d ", i);
    printf("\n");
}
