#include<stdio.h>

int main()
{
    int n, k, i, x, out = 0;
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if(x < k)
            out++;
    }
    printf("%d\n", out);

    return 0;
}
