#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m], i, j;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < m; i++){
        scanf("%d", &b[i]);

        int initial = 0;
        if(i != 0){
            initial = b[i - 1];
        }
        for(j = initial; j < n; j++){
            if(a[j] >= b[i]){
                b[i] = j;
                break;
            }
        }
        if(j == n){
            b[i] = n;
        }
    }

    for(i = 0; i < m; i++){
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
