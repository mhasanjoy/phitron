#include<stdio.h>

int main()
{
    int t, i, n, j, pair;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        pair = 0;

        for(j = 1; j < n; j++){
            if(s[j] != s[j - 1]){
                pair++;
            }
        }
        printf("%d\n", pair);
    }

    return 0;
}
