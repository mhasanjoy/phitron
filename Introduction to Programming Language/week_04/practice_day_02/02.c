#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    int i;
    for(i = 0; i < strlen(str) - 1; i++){
        if(str[i] != '0' && str[i] != '1'){
            break;
        }
    }
    if(i == strlen(str) - 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
