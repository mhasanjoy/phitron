#include<stdio.h>

int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);

    for(i = 1; m * i <= n ; i++){
        printf("%d ", m * i);
    }
    printf("\n");

    return 0;
}
