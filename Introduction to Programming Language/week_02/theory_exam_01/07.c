#include<stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int x = num1, y = num2, rem;
    while(1){
        rem = x % y;
        x = y;
        y = rem;

        if(rem == 0){
            printf("The GCD of %d and %d is %d.\n", num1, num2, x);
            break;
        }
    }

    return 0;
}

