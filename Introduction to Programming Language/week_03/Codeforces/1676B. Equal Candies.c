#include<stdio.h>

int main()
{
    int t, i, n, j, min_index, candies;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int a[n];
        min_index = 0;
        candies = 0;

        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);

            if(a[j] < a[min_index])
                min_index = j;
        }
        for(j = 0; j < n; j++)
            candies += a[j] - a[min_index];

        printf("%d\n", candies);
    }

    return 0;
}
