#include<stdio.h>

void solve();
int gcd(int p, int q);

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
    int arr[n], i, j, hexa_pair = 0;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(gcd(arr[i], arr[j]) == 1)
                hexa_pair += 2;

    printf("%d\n", hexa_pair);
}

int gcd(int p, int q)
{
    int remainder;
    while(1)
    {
        remainder = p % q;
        if(!remainder)
            return q;
        p = q;
        q = remainder;
    }
}
