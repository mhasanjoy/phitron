#include<stdio.h>

int main()
{
    int r;
    scanf("%d", &r);
    int x[r], y[r], i, j, safe = r;
    for(i = 0; i < r; i++){
        scanf("%d %d", &x[i], &y[i]);
    }

    for(i = 1; i < r; i++){
        for(j = 0; j < i; j++){
            if(x[i] == x[j] || y[i] == y[j]){
                x[i] = -1;
                x[j] = -1;
                safe = safe - 2;
                break;
            }
        }
    }

    printf("Safe rooks - %d\n", safe);
    for(i = 0; i < r; i++){
        if(x[i] != -1){
            printf("%d %d\n", x[i], y[i]);
        }
    }

    return 0;
}
