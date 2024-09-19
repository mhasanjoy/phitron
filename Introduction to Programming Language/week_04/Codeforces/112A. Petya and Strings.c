#include<stdio.h>
#include<string.h>

int main()
{
    char str1[101], str2[101];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int i;
    for(i = 0; i < strlen(str1) - 1; i++){
        if(str1[i] >= 'A' && str1[i] <= 'Z'){
            str1[i] += 32;
        }
        if(str2[i] >= 'A' && str2[i] <= 'Z'){
            str2[i] += 32;
        }

        if(str1[i] > str2[i]){
            printf("1\n");
            break;
        }
        else if(str1[i] < str2[i]){
            printf("-1\n");
            break;
        }
    }
    if(i == strlen(str1) - 1){
        printf("0\n");
    }

    return 0;
}
