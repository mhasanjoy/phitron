#include<stdio.h>

int main()
{
    int num, i;
    scanf("%d", &num);

    printf("The factors of %d are: 1, ", num);
    for(i = 2; i <= num / 2; i++){
        if(num % i == 0){
            printf("%d, ", i);
        }
    }
    printf("%d.\n", num);

    return 0;
}

