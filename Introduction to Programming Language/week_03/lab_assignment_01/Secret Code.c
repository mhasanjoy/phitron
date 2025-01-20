#include<stdio.h>
#include<math.h>

int main()
{
    int t, i, n, j;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        if(n == 1)
        {
            printf("No\n");
            continue;
        }
        for(j = 2; j <= (int)sqrt(n); j++)
        {
            if(n % j == 0)
            {
                printf("No\n");
                break;
            }
        }
        if(j == (int)sqrt(n) + 1)
            printf("Yes\n");
    }

    return 0;
}
