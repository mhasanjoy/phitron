#include<stdio.h>

int main()
{
    int n, i, j, sum = 0;
    scanf("%d", &n);
    for(i = 1, j = 1; i <= n; i++)
    {
        if(j % 2)
            sum += i;
        else
            sum -= i;
        if(i % 3 == 0)
            j++;
    }
    printf("%d\n", sum);

    return 0;
}
