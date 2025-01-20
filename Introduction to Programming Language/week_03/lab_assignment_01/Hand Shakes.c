#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    long long int handshakes = 0;
    for(i = 1; i < n; i++)
        handshakes += (n - i);
    printf("%lld\n", handshakes);

    return 0;
}
