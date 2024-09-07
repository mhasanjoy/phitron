#include<stdio.h>
#include<math.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    int prime[t], i, j;

    for(i = 0; i < t; i++){
        scanf("%d", &n);

        if(n == 1){
            prime[i] = 0;
            continue;
        }
        for(j = 2; j <= (int)sqrt(n); j++){
            if(n % j == 0){
                prime[i] = 0;
                break;
            }
        }
        if(j == (int)sqrt(n) + 1){
            prime[i] = 1;
        }
    }

    for(i = 0; i < t; i++){
        if(prime[i]){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}
