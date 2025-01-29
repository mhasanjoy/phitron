#include<stdio.h>

void solution();

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solution();

    return 0;
}

void solution()
{
    int k, x = 0;
    scanf("%d", &k);
    while(k--)
    {
        x++;
        while(1)
        {
            if(x % 3 == 0 || x % 10 == 3)
                x++;
            else
                break;
        }
    }
    printf("%d\n", x);
}
