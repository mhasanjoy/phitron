#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool binary_string(char s[], int length);

int main()
{
    char s[30];
    scanf("%s", s);
    if(binary_string(s, strlen(s)))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

bool binary_string(char s[], int length)
{
    int i;
    for(i = 0; i < length; i++)
        if(s[i] != '0' && s[i] != '1')
            return false;
    return true;
}
