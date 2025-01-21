#include<stdio.h>
#include<string.h>

int main()
{
    int t, i, length, j, k;
    scanf("%d", &t);
    char s[21];
    for(i = 1; i <= t; i++)
    {
        scanf("%s", s);
        length = strlen(s);
        for(j = 0, k = length - 1; j < length / 2; j++, k--)
        {
            if(s[j] != s[k])
            {

                printf("Case #1: Not Palindrome\n");
                break;
            }
        }
        if(j == length / 2 && length > 7)
            printf("Case #2: %c%d%c\n", s[0], length - 2, s[length - 1]);
        else if(j == length / 2)
            printf("Case #3: %s\n", s);
    }

    return 0;
}
