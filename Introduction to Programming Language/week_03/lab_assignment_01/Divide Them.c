#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int roll[n], i, k;
    for(i = 0; i < n; i++){
        scanf("%d", &roll[i]);
    }
    scanf("%d", &k);

    for(i = k; i < n; i++){
        printf("%d ", roll[i]);
    }
    for(i = 0; i < k; i++){
        printf("%d ", roll[i]);
    }
    printf("\n");

    return 0;
}
