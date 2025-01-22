#include<stdio.h>

void solution();

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solution();

    return 0;
}

void solution()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a >= 1)
        printf("%d\n", b * 2 + a + 1);
    else
        printf("1\n");
}
