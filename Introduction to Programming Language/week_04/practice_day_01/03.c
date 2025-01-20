#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    scanf("%s", s);

    int length = strlen(s), i, vowel = 0;
    for(i = 0; i < length; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            vowel++;
    }
    printf("Vowel - %d\n", vowel);
    printf("Consonant - %d\n", length - vowel);

    return 0;
}
