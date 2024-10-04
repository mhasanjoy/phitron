#include<stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i == 1){
            for(j = 1; j <= n; j++){
                printf("%d", j);
            }
            printf("\n");
        }
        else if(i == n){
            for(j = 1; j <= n; j++){
                printf("%d", n);
            }
            printf("\n");
        }
        else{
            printf("%d", i);
            for(j = 2; j < n; j++){
                printf(" ");
            }
            printf("%d\n", n);
        }
    }

    return 0;
}
