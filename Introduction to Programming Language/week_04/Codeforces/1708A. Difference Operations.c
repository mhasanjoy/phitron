#include<stdio.h>
#include<stdbool.h>

int main()
{
    int t, n, i;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d", &n);
        int a[n], j;
        bool possible = true;
        for(j = 0; j < n; j++){
            scanf("%d", &a[j]);

            if(a[j] % a[0] != 0){
                possible = false;
            }
        }
        if(possible){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
