#include<stdio.h>

void solution()
{
    int n, i, pairs = 0;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    for(i = 1; i < n; i++)
        if(s[i] != s[i - 1])
            pairs++;
    printf("%d\n", pairs);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solution();

    return 0;
}
