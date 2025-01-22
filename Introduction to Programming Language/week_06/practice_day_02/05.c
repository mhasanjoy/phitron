#include<stdio.h>

void matrix_multiplication(int n, int m);

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    matrix_multiplication(n, m);

    return 0;
}

void matrix_multiplication(int n, int m)
{
    int mat1[n][m], mat2[m][n], i, j, k, mul;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%d", &mat1[i][j]);
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat2[i][j]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            mul = 0;
            for(k = 0; k < m; k++)
                mul += mat1[i][k] * mat2[k][j];
            printf("%d ", mul);
        }
        printf("\n");
    }
}
