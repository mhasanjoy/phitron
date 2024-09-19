#include<stdio.h>
#include<math.h>

int main()
{
    int matrix[5][5], i, j, min_moves;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &matrix[i][j]);

            if(matrix[i][j] == 1){
                min_moves = abs(2 - i) + abs(2 - j);
            }
        }
    }
    printf("%d\n", min_moves);

    return 0;
}
