#include<stdio.h>

void summation(int x);

int main()
{
    int n;
    scanf("%d", &n);
    summation(n);

    return 0;
}

void summation(int x)
{
    int arr[x], i, sum = 0;
    for(i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i] % 10 + arr[i] / 1000;
    }
    printf("Sum = %d\n", sum);
}
