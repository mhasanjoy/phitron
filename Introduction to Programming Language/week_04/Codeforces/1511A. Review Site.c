#include<stdio.h>

int main()
{
    int t, i, n, j, review, upvotes;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        upvotes = 0;
        for(j = 1; j <= n; j++)
        {
            scanf("%d", &review);
            if(review == 1 || review == 3)
                upvotes++;

        }
        printf("%d\n", upvotes);
    }

    return 0;
}
