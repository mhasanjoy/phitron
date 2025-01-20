#include<stdio.h>

void solution()
{
    int n;
    scanf("%d", &n);
    int a[n], i, b[n], j;
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        char moves[b[i]];
        scanf("%s", moves);

        for(j = 0; j < b[i]; j++)
        {
            if(moves[j] == 'D')
                a[i] = (a[i] + 1) % 10;
            else if(a[i] == 0 && moves[j] == 'U')
                a[i] = 9;
            else if(moves[j] == 'U')
                a[i]--;
        }
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solution();

    return 0;
}
