#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int marks[n], i, highest = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &marks[i]);

        if(marks[i] > highest){
            highest = marks[i];
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", highest - marks[i]);
    }
    printf("\n");

    return 0;
}
