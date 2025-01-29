#include<stdio.h>

void solve();

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solve();

    return 0;
}

void solve()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", (n + 1) / 10);
}
