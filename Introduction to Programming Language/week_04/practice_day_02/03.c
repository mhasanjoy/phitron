#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    int i, cost = 0, sqr;
    for(i = 0; i < strlen(str) - 1; i++){
        cost += str[i] - 96;
    }
    for(sqr = 1, i = 0; sqr <= cost; sqr *= 2, i++){
        if(sqr == cost){
            break;
        }
    }
    if(sqr > cost){
        printf("NO\n");
    }
    else{
        printf("YES\n");
        printf("cost = 2^%d\n", i);
    }

    return 0;
}
