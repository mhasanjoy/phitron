#include<stdio.h>

int main()
{
    int t, i, w, h, n, pieces;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%d %d %d", &w, &h, &n);

        pieces = 1;
        while(1)
        {
            if(w % 2)
                break;
            else
            {
                pieces *= 2;
                w = w / 2;
            }
        }
        while(1)
        {
            if(h % 2)
                break;
            else
            {
                pieces *= 2;
                h = h / 2;
            }
        }

        if(pieces >= n)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
