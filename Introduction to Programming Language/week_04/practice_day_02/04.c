#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix1[n][m], matrix2[n][m], i, j, mul, k;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            mul = 0;
            for(k = 0; k < n; k++){
                mul += (matrix1[i][k] * matrix2[k][j]);
            }
            printf("%d ", mul);
        }
        printf("\n");
    }

    return 0;
}
