#include<stdio.h>

int main()
{
    int n, m, i, j, color = 0;
    scanf("%d %d", &n, &m);
    char ch;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf(" %c", &ch);
            if(ch == 'C' || ch == 'M' || ch == 'Y')
                color++;
        }
    }

    if(color)
        printf("#Color\n");
    else
        printf("#Black&White\n");

    return 0;
}
