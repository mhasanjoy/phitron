#include<stdio.h>

void divisors(int n);

int main()
{
    int n;
    scanf("%d", &n);
    divisors(n);

    return 0;
}

void divisors(int n)
{
    int i;
    printf("1 ");
    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            printf("%d ", i);
    }
    printf("%d\n", n);
}
