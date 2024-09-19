#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix1[n][m], matrix2[n][m], i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &matrix2[i][j]);

            matrix1[i][j] += matrix2[i][j];
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
