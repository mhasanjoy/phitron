#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    if(n >= 1){
        for(i = 1; i <= n; i++){
            printf("%d ", i);
        }
    }
    else{
        for(i = 1; i >= n; i--){
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
