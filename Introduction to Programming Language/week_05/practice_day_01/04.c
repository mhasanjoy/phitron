#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    fgets(s, 50, stdin);
    int i;

    printf("%c", s[0]);
    for(i = 1; i < strlen(s) - 1; i++){
        if(s[i] != s[i-1]){
            printf("%c", s[i]);
        }
    }
    printf("\n");

    return 0;
}
