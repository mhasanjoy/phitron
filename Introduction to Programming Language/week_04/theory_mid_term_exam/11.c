#include<stdio.h>

int main()
{
    int matrix[3][3], i, j, sum_row[3], sum_col[3], sum_diagonal = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        sum_row[i] = 0;
        sum_col[i] = 0;
        for(j = 0; j < 3; j++){
            sum_row[i] += matrix[i][j];
            sum_col[i] += matrix[j][i];

            if(i == j){
                sum_diagonal += matrix[i][j];
            }
        }
    }

    for(i = 1; i < 3; i++){
        if(sum_row[i] != sum_row[i - 1] || sum_col[i] != sum_col[i - 1] || sum_row[i] != sum_col[i]){
            break;
        }
    }
    if(i == 3 && sum_row[0] == sum_diagonal){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
