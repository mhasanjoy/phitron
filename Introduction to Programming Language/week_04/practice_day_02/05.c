#include<stdio.h>

int main()
{
    int r;
    scanf("%d", &r);
    int x[r], y[r], i, j, safe = r;
    for(i = 0; i < r; i++)
        scanf("%d %d", &x[i], &y[i]);
    for(i = 0; i < r - 1; i++)
    {
        for(j = i + 1; j < r; j++)
        {
            if(x[i] == x[j] || y[i] == y[j])
            {
                safe -= 2;
                x[i] = 0;
                x[j] = 0;
            }
        }
    }

    printf("Safe rooks - %d\n", safe);
    for(i = 0; i < r; i++)
        if(x[i])
            printf("%d %d\n", x[i], y[i]);

    return 0;
}
