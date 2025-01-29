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
    printf("%d %d %d %d\n", (n / 4) - 3, (n / 4) - 1, (n / 4) + 1, (n / 4) + 3);
}
