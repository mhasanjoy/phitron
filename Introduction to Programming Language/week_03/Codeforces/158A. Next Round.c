#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n], i, participants = 0;
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        if(a[i] >= a[k] && a[i] > 0)
            participants++;
    }
    printf("%d\n", participants);

    return 0;
}
