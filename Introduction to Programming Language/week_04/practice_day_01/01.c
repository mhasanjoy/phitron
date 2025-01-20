#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    fgets(s, sizeof(s), stdin);

    int length = strlen(s) - 1, i, count[26] = {0}, max_index;

    for(i = 0; i < length; i++)
        count[s[i] - 97]++;

    while(1)
    {
        max_index = 0;
        for(i = 1; i < 26; i++)
        {
            if(count[i] > count[max_index])
                max_index = i;
        }
        if(!count[max_index])
            break;
        for(i = 1; i <= count[max_index]; i++)
            printf("%c", max_index + 97);
        count[max_index] = 0;
    }
    printf("\n");

    return 0;
}
