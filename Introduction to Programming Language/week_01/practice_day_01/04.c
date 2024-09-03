#include<stdio.h>

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    int sum = num1 + num2, diff = num1 - num2, mul = num1 * num2;
    printf("%d %d %d\n", sum, diff, mul);

    return 0;
}
