#include<stdio.h>

int main()
{
    long long int num;
    scanf("%I64d", &num);
    int digits = 0;

    while(1){
        num = num / 10;
        digits++;
        if(num == 0){
            break;
        }
    }
    printf("%d digits\n", digits);

    return 0;
}
