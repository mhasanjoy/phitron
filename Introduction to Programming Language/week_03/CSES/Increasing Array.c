#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x[n], i, moves = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);

        if(x[i] < x[i - 1] && i >= 1)
        {
            moves += x[i - 1] - x[i];
            x[i] = x[i - 1];
        }
    }
    printf("%d\n", moves);

    return 0;
}
