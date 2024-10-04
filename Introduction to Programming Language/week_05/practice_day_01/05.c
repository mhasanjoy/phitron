#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    int a, b, ans;
    scanf("%d %d", &a, &b);

    if(ch == '+'){
        ans = a + b;
    }
    else if(ch == '-'){
        ans = a - b;
    }
    else if(ch == '*'){
        ans = a * b;
    }
    else if(ch == '/'){
        ans = a / b;
    }
    printf("%d\n", ans);

    return 0;
}
