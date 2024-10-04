#include<stdio.h>
#include<string.h>

int main()
{
    int t, i, j, k, length;
    char s[21];
    scanf("%d ", &t);
    for(i = 0; i < t; i++){
        scanf("%s", s);

        length = strlen(s);
        for(j = 0, k = length - 1; j < length / 2; j++, k--){
            if(s[j] != s[k]){
                break;
            }
        }

        if(j != length / 2){
            printf("Case #1: Not Palindrome\n");
        }
        else if(length > 7){
            printf("Case #2: %c%d%c\n", s[0], length - 2, s[length - 1]);
        }
        else{
            printf("Case #3: %s\n", s);
        }
    }

    return 0;
}
