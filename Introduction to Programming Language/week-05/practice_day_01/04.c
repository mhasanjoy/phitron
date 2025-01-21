#include<stdio.h>
#include<string.h>

int main()
{
    char s[30];
    scanf("%s", s);
    int i, length = strlen(s);

    printf("%c", s[0]);
    for(i = 1; i < length; i++)
        if(s[i] != s[i - 1])
            printf("%c", s[i]);
    printf("\n");

    return 0;
}
