#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int run[n], i, out = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &run[i]);

        if(run[i] < k){
            out++;
        }
    }
    printf("%d\n", out);

    return 0;
}
