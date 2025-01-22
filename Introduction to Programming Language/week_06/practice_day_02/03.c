#include<stdio.h>

void concatenate(int m);

int main()
{
    int m;
    scanf("%d", &m);
    concatenate(m);

    return 0;
}

void concatenate(int m)
{
    int i;
    char str[m][20];
    for(i = 0; i < m; i++)
        scanf("%s", str[i]);
    for(i = 0; i < m; i++)
        printf("%s ", str[i]);
    printf("\n");
}
