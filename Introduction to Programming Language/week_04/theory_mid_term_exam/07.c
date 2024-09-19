#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);

    int i;
    for(i = 0; i < strlen(str1); i++){
        if(str1[i] > str2[i]){
            break;
        }
    }
    if(i == strlen(str1)){
        printf("%s\n", str1);
        printf("%s\n", str2);
    }
    else{
        printf("%s\n", str2);
        printf("%s\n", str1);
    }

    return 0;
}
