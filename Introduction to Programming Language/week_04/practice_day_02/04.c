#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mat1[n][n], mat2[n][n], i, j, k, mul;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat1[i][j]);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat2[i][j]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            mul = 0;
            for(k = 0; k < n; k++)
                mul += mat1[i][k] * mat2[k][j];
            printf("%d ", mul);
        }
        printf("\n");
    }

    return 0;
}
