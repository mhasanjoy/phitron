#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int mat1[n][m], mat2[n][m], i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            scanf("%d", &mat1[i][j]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &mat2[i][j]);
            mat1[i][j] += mat2[i][j];
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            printf("%d ", mat1[i][j]);
        printf("\n");
    }

    return 0;
}
