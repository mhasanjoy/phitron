#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    scanf("%s", s);
    int i, length = strlen(s);
    for(i = 0; i < length; i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            break;
    }
    if(i == length)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
