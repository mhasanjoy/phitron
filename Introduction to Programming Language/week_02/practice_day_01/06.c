#include<stdio.h>

int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);

    for(i = n; i % 24 != m ; i++){
        printf("%d ", i % 24);
    }
    printf("%d\n", i % 24);

    return 0;
}
