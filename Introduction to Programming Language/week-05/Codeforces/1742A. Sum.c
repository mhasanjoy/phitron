#include<stdio.h>

void solution()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if((a + b == c) || (a + c == b) || (b + c == a))
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solution();

    return 0;
}
