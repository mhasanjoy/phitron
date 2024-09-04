#include<stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int x = num1, y = num2, rem, lcm;
    while(1){
        rem = x % y;
        x = y;
        y = rem;

        if(rem == 0){
            lcm = (num1 * num2) / x;
            printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);
            break;
        }
    }

    return 0;
}

