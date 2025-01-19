#include<stdio.h>

int main()
{
    long long int num;
    scanf("%I64d", &num);

    int digits = 1;
    while(1){
        num /= 10;
        if(num == 0)
            break;
        digits++;
    }
    printf("%d digits\n", digits);

    return 0;
}
