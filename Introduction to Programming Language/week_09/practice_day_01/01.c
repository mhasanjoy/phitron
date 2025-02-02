#include<stdio.h>

int solve(int x, int y)
{
    if(y == 1)
        return x;
    return x * solve(x, y - 1);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", solve(n, m));

    return 0;
}
