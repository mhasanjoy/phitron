#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[n][n], i, j, k, count;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        printf("row-%d and column-%d = ", i + 1, i + 1);
        for(j = 0; j < n; j++){
            count = 0;
            for(k = 0; k < n; k++){
                if(matrix[i][j] == matrix[i][k]){
                    count++;
                }
                if(matrix[i][j] == matrix[k][i]){
                    count++;
                }
            }
            if(count == 1){
                printf("%d ", matrix[i][j]);
            }
        }
        for(j = 0; j < n; j++){
            count = 0;
            for(k = 0; k < n; k++){
                if(matrix[j][i] == matrix[i][k]){
                    count++;
                }
                if(matrix[j][i] == matrix[k][i]){
                    count++;
                }
            }
            if(count == 1){
                printf("%d ", matrix[j][i]);
            }
        }
        printf("\n");
    }

    return 0;
}
