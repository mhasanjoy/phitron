#include<stdio.h>
#include<string.h>

void upper_case(char *str, int length);

int main()
{
    char str[20];
    scanf("%s", str);
    upper_case(str, strlen(str));

    return 0;
}

void upper_case(char *str, int length)
{
    int i;
    for(i = 0; i < length; i++)
    {
        if(str[i] % 2)
            printf("%c", str[i]);
        else
            printf("%c", str[i] -  32);
    }
    printf("\n");
}
