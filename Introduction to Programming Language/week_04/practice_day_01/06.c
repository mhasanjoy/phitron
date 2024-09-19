#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m], i, j, transpose[m][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);

            transpose[j][i] = matrix[i][j];
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
