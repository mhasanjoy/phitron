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
    int n, i, j;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(j == 1 || i == j)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
}
