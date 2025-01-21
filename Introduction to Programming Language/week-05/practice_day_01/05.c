#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    int a, b, result;
    scanf("%d %d", &a, &b);

    if(ch == '+')
        result = a + b;
    else if(ch == '-')
        result = a - b;
    else if(ch == '*')
        result = a * b;
    else if(ch == '/')
        result = a / b;

    printf("%d\n", result);

    return 0;
}
