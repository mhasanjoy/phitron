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
    int n, m, i, b, top_idx = 0;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);
    for(i = 0; i < m; i++)
    {
        scanf("%d", &b);
        top_idx += b;
        if(top_idx >= n)
            top_idx -= n;
    }
    printf("%d\n", a[top_idx]);
}
