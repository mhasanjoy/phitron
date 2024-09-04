#include<stdio.h>

int main()
{
    long long int n;
    scanf("%I64d", &n);

    while(n > 1){
        printf("%I64d, ", n);
        if(n % 2 == 0){
            n /= 2;
        }
        else{
            n--;
        }
    }
    printf("%I64d\n", n);

    return 0;
}

