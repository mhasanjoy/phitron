#include<stdio.h>

int operation(char op, int x, int y);

int main()
{
    char ch;
    scanf("%c", &ch);
    int a, b, ans;
    scanf("%d %d", &a, &b);
    ans = operation(ch, a, b);
    printf("%d\n", ans);

    return 0;
}

int operation(char op, int x, int y)
{
    if(op == '+')
        return x + y;
    if(op == '-')
        return x - y;
    if(op == '*')
        return x * y;
    if(op == '/')
        return x / y;
}
