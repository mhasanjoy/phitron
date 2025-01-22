#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    scanf("%s", str);
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] + n >= 123)
            str[i] = 97 + (str[i] + n - 123);
        else
            str[i] = (str[i] + n);
    }
    printf("%s\n", str);

    return 0;
}
