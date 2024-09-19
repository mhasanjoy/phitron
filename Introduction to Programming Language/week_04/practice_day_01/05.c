#include<stdio.h>

int main()
{
    int r, x, y, i, j;
    scanf("%d", &r);
    int chess[3][3];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            chess[i][j] = 1;
        }
    }
    for(i = 1; i <= r; i++){
        scanf("%d %d", &x, &y);
        chess[x - 1][y - 1] = 0;
    }

    printf("Total empty cells - %d\n", 9 - r);
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(chess[i][j]){
                printf("%d %d\n", i + 1, j + 1);
            }
        }
    }

    return 0;
}
