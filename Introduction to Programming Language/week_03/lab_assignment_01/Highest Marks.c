#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int marks[n], i, max_index = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
        if(marks[i] > marks[max_index])
            max_index = i;
    }
    for(i = 0; i < n; i++)
        printf("%d ", marks[max_index] - marks[i]);
    printf("\n");

    return 0;
}
