#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i, j, max = 0;
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && max < a[i])
            max = a[i];
        for(j = i + 1; j < n; j++)
        {
            if((a[i] + a[j]) % 2 == 0 && max < (a[i] + a[j]))
                max = a[i] + a[j];
        }
    }
    printf("%d\n", max);

    return 0;
}
