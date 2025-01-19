#include<stdio.h>

int main()
{
    long long int n, k, odd, num;
    scanf("%I64d %I64d", &n, &k);

    odd = (n / 2) + (n % 2);
    if(k <= odd)
        num = (k * 2) - 1;
    else
        num = (k - odd) * 2;

    printf("%I64d\n", num);

    return 0;
}
