#include<stdio.h>
#include<string.h>

int main()
{
    char s[101];
    fgets(s, sizeof(s), stdin);

    int i, length = strlen(s) - 1, vowel = 0, consonant = 0;
    for(i = 0; i < length; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vowel++;
        }
        else if(s[i] > 'a' && s[i] < 'z'){
            consonant++;
        }
    }

    printf("Vowel - %d\n", vowel);
    printf("Consonant - %d\n", consonant);

    return 0;
}
