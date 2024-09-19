#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    fgets(str, sizeof(str), stdin);

    int i;
    for(i = 0; i < strlen(str) - 1; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y'){
            printf(".%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}
