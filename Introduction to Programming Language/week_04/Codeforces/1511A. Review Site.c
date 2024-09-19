#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int n, i, upvotes[t], j, r;
    for(i = 0; i < t; i++){
        upvotes[i] = 0;
        scanf("%d", &n);
        for(j = 0; j < n; j++){
            scanf("%d", &r);

            if(r == 1 || r == 3){
                upvotes[i]++;
            }
        }
    }

    for(i = 0; i < t; i++){
        printf("%d\n", upvotes[i]);
    }

    return 0;
}
