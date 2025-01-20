#include<stdio.h>
#include<stdbool.h>

void solution()
{

    int n;
    scanf("%d", &n);
    int a[n], i;
    bool possible = true;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % a[0])
            possible = false;
    }
    if(possible)
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solution();

    return 0;
}
