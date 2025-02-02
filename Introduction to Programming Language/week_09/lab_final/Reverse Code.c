#include<stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    while(n)
    {
        printf("%c", (n % 10) + 64);
        n /= 10;
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solve();

    return 0;
}
