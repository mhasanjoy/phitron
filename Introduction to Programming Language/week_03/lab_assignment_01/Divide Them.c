#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int rolls[n], i, k;
    for(i = 0; i < n; i++)
        scanf("%d", &rolls[i]);
    scanf("%d", &k);

    for(i = k; i < n; i++)
        printf("%d ", rolls[i]);
    for(i = 0; i < k; i++)
        printf("%d ", rolls[i]);
    printf("\n");

    return 0;
}
