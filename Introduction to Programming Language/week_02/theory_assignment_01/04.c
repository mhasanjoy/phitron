#include<stdio.h>

int main()
{
    long long int num;
    scanf("%I64d", &num);

    int sum = 0;
    while(1){
        sum += num % 10;
        num /= 10;
        if(num == 0)
            break;
    }
    printf("%d\n", sum);

    return 0;
}
