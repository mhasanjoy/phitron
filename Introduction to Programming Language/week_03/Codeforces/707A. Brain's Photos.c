#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    char color;
    bool colored = false;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            scanf(" %c", &color);

            if(color == 'C' || color == 'M' || color == 'Y'){
                colored = true;
            }
        }
    }

    if(colored){
        printf("#Color\n");
    }
    else{
        printf("#Black&White\n");
    }

    return 0;
}
