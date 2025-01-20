#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[n][n], i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    }

    for(i = 0; i < n; i++)
    {
        printf("row-%d and column-%d = ", i + 1, i + 1);
        for(j = 0; j < n; j++)
        {
            if(i != j)
                printf("%d ", matrix[i][j]);
        }
        for(j = 0; j < n; j++)
        {
            if(i != j)
                printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
