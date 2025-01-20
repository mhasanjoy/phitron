#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t, i, n, j, max, min, min_position, dominant;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int a[n], diff = n;
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);

            if(j == 0)
            {
                max = a[j];
                min = a[j];
                min_position = j;
            }
            else if(a[j] < min)
            {
                min = a[j];
                min_position = j;
            }
            else if(a[j] > max)
                max = a[j];
        }

        if(max == min)
        {
            printf("-1\n");
            continue;
        }
        for(j = 0; j < n; j++)
        {
            if(a[j] == max && abs(j - min_position) < diff)
            {
                diff = abs(j - min_position);
                dominant = j + 1;
            }
        }
        printf("%d\n", dominant);
    }

    return 0;
}
