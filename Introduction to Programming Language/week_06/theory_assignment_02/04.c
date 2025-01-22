#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int i, num;
    for(i = 2; i <= n; i += 2)
    {
        printf("%d ", i);
        k--;
        if(k == 0)
            num = i;
    }
    for(i = 1; i <= n; i += 2)
    {
        printf("%d ", i);
        k--;
        if(k == 0)
            num = i;
    }
    printf("\n%d\n", num);

    return 0;
}
