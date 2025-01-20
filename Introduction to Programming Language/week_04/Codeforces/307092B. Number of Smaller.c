#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m], i, j;
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);

        if(i == 0)
            j == 0;
        else
            j = b[i - 1];

        for(; j < n; j++)
        {
            if(b[i] <= a[j])
            {
                b[i] = j;
                break;
            }
        }
        if(j == n)
            b[i] = n;
    }

    for(i = 0; i < m; i++)
        printf("%d ", b[i]);
    printf("\n");

    return 0;
}
