#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    long long int handshake = 0;

    for(i = 1; i < n ; i++){
        handshake += (n - i);
    }
    printf("%lld\n", handshake);

    return 0;
}
