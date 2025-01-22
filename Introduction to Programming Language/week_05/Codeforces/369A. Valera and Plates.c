#include<stdio.h>

int main()
{
    int n, m, k, i, a, wash = 0;
    scanf("%d %d %d", &n, &m, &k);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a);

        if(a == 2)
        {
            if(k)
                k--;
            else if(m)
                m--;
            else
                wash++;
        }
        else if(a == 1 && m)
            m--;
        else
            wash++;
    }
    printf("%d\n", wash);

    return 0;
}
