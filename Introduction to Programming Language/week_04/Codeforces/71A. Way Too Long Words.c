#include<stdio.h>
#include<string.h>

int main()
{
    int n, i;
    scanf("%d ", &n);
    char word[n][101];
    for(i = 0; i < n; i++){
        fgets(word[i], sizeof(word[i]), stdin);
    }

    for(i = 0; i < n; i++){
        int length = strlen(word[i]) - 1;
        if(length > 10){
            printf("%c%d%c\n", word[i][0], length - 2, word[i][length - 1]);
        }
        else{
            //puts(word[i]);
            printf("%s", word[i]);
        }
    }

    return 0;
}
