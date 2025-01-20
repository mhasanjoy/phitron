#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x, i, sum = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if(x % 2)
            sum += x;
    }
    if(sum % 2)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
