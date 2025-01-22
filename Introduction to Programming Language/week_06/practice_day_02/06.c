#include<stdio.h>

void chessboard(int x[], int y[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int x[n], y[n], i;
    for(i = 0; i < n; i++)
        scanf("%d %d", &x[i], &y[i]);
    chessboard(x, y, n);

    return 0;
}

void chessboard(int x[], int y[], int n)
{
    int i, j, safe = n;
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(x[i] == x[j] || y[i] == y[j])
            {
                safe -= 2;
                x[i] = 0;
                x[j] = 0;
            }
        }
    }
    printf("Safe rooks - %d\n", safe);
    for(i = 0; i < n; i++)
        if(x[i] != 0)
            printf("%d %d\n", x[i], y[i]);
}
