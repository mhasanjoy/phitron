#include<stdio.h>

int main()
{
    int m, i;
    scanf("%d ", &m);
    char str[m][100];
    for(i = 0; i < m; i++){
        scanf("%s", str[i]);
    }

    for(i = 0; i < m; i++){
        printf("%s ", str[i]);
    }
    printf("\n");

    return 0;
}
