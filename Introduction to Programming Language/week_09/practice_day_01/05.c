#include<stdio.h>

int solve(int n)
{
    if(n == 1)
        return 1;
    return n + solve(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", solve(n));

    return 0;
}
