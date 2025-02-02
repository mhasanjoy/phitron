#include<stdio.h>

int main()
{
    int n, i, unique_char = 0;
    scanf("%d", &n);
    char s[n], str[26];
    scanf("%s", s);

    for(i = 0; i < 26; i++)
        str[i] = 0;

    for(i = 0; i < n; i++)
        str[s[i] - 97]++;

    for(i = 0; i < 26; i++)
        if(str[i] == 1)
            unique_char++;

    printf("%d\n", unique_char);

    return 0;
}
