#include<stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if(x >= 0 && x <= 32)
    {
        printf("F\n");
    }
    else if(x >= 33 && x <= 39)
    {
        printf("D\n");
    }
    else if(x >= 40 && x <= 49)
    {
        printf("C\n");
    }
    else if(x >= 50 && x <= 59)
    {
        printf("B\n");
    }
    else if(x >= 60 && x <= 69)
    {
        printf("A-\n");
    }
    else if(x >= 70 && x <= 79)
    {
        printf("A\n");
    }
    else if(x >= 80 && x <= 100)
    {
        printf("A+\n");
    }

    return 0;
}
