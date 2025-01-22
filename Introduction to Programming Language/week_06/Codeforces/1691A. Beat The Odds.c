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
    int n, a, i, even = 0, odd = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if(a % 2)
            odd++;
        else
            even++;
    }
    if(even < odd)
        printf("%d\n", even);
    else
        printf("%d\n", odd);
}
