#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int n[t], i, j;
    for(i = 0; i < t; i++){
        scanf("%d", &n[i]);
    }

    for(i = 0; i < t; i++){
        for(j = 2; j <= n[i]; j++){
            printf("%d ", j);
        }
        printf("1\n");
    }

    return 0;
}
