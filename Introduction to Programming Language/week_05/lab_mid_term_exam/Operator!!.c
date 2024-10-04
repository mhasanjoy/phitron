#include<stdio.h>
#include<string.h>

int main()
{
    char s[21];
    scanf("%s", s);
    int a, b, i, sum = 0;
    scanf("%d %d", &a, &b);

    for(i = 0; i < strlen(s); i++){
        if(s[i] == '+'){
            sum += (a + b);
        }
        else if(s[i] == '*'){
            sum += (a * b);
        }
    }
    printf("%d\n", sum);

    return 0;
}
