#include<stdio.h>
#include<string.h>

int main()
{
    char s[101];
    fgets(s, sizeof(s), stdin);

    int i, length = strlen(s) - 1;
    for(i = 0; i < length / 2; i++){
        if(s[i] != s[length - 1 - i]){
            break;
        }
    }

    if(i == length / 2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
