#include<stdio.h>

int main()
{
    long long int num;
    scanf("%I64d", &num);

    int sum = 0;
    while(num != 0){
        sum += num % 10;
        num = num / 10;
    }

    printf("%d\n", sum);

    return 0;
}
