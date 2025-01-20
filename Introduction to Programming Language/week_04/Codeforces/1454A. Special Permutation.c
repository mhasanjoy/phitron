#include<stdio.h>

void solution()
{
    int n, i;
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
        printf("%d ", i);
    printf("1\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solution();

    return 0;
}
