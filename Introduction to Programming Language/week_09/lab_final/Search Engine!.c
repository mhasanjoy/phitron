#include<stdio.h>

int solve()
{
    int n;
    scanf("%d", &n);
    int arr[n], i, s;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &s);

    for(i = 0; i < n; i++)
        if(arr[i] == s)
            return i + 1;

    return 0;
}

int main()
{
    int t, i, ans;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        ans = solve();
        if(ans)
            printf("Case %d: %d\n", i, ans);
        else
            printf("Case %d: Not Found\n", i);
    }

    return 0;
}
