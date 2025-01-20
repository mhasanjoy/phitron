#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    scanf("%s", s);

    int length = strlen(s), i, j;
    for(i = 0, j = length - 1; i < length / 2; i++, j--)
    {
        if(s[i] != s[j])
        {
            printf("NO\n");
            break;
        }
    }
    if(i == length / 2)
        printf("YES\n");

    return 0;
}
