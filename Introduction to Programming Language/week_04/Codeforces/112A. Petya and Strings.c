#include<stdio.h>
#include<string.h>

int main()
{
    char str1[101], str2[101];
    scanf("%s", str1);
    scanf("%s", str2);

    int i, length = strlen(str1);
    for(i = 0; i < length; i++)
    {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] += 32;
        if(str2[i] >= 'A' && str2[i] <= 'Z')
            str2[i] += 32;
        if(str1[i] < str2[i])
        {
            printf("-1\n");
            break;
        }
        else if(str1[i] > str2[i])
        {
            printf("1\n");
            break;
        }
    }
    if(i == length)
        printf("0\n");

    return 0;
}
