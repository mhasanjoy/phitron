#include<stdio.h>
#include<string.h>

int main()
{
    char s[101];
    fgets(s, sizeof(s), stdin);

    int i, length = strlen(s) - 1, ch[26];
    for(i = 0; i < 26; i++){
        ch[i] = 0;
    }
    for(i = 0; i < length; i++){
        int conversion = s[i] - '\0';
        ch[conversion - 97]++;
    }

    for(i = 0; i < 26; i++){
        int max = ch[i], j, k;
        for(j = 0; j < 26; j++){
            if(ch[j] > max){
                max = ch[j];
            }
        }
        for(j = 0; j < 26; j++){
            if(ch[j] == max){
                for(k = 1; k <= max; k++){
                    printf("%c", (char)(97 + j));
                }
                ch[j] = 0;
                break;
            }
        }
    }
    printf("\n");

    return 0;
}
