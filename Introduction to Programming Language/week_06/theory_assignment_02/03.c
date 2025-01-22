#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool char_present(char str[], int length, char ch);

int main()
{
    char str[20];
    scanf("%s", str);
    int length = strlen(str);
    if(char_present(str, length, '1') && char_present(str, length, '9') && char_present(str, length, '7'))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

bool char_present(char str[], int length, char ch)
{
    int i;
    for(i = 0; i < length; i++)
        if(str[i] == ch)
            return true;

    return false;
}
