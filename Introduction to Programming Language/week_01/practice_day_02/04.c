#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if(num >=0 && num <= 32){
        printf("F\n");
    }
    else if(num >= 33 && num <= 39){
        printf("D\n");
    }
    else if(num >= 40 && num <= 49){
        printf("C\n");
    }
    else if(num >= 50 && num <= 59){
        printf("B\n");
    }
    else if(num >= 60 && num <= 69){
        printf("A-\n");
    }
    else if(num >= 70 && num <= 79){
        printf("A\n");
    }
    else if(num >= 80 && num <= 100){
        printf("A+\n");
    }

    return 0;
}
