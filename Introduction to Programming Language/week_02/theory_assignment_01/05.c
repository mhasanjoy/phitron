#include<stdio.h>

int main()
{
    long long int n;
    scanf("%I64d", &n);

    while(n > 1)
    {
        printf("%I64d, ", n);
        if(n % 2)
            n--;
        else
            n /= 2;
    }
    printf("%I64d\n", n);

    return 0;
}
