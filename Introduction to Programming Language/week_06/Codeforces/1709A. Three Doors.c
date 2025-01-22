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
    int x, a, b, c, open = 0;
    scanf("%d", &x);
    scanf("%d %d %d", &a, &b, &c);
    while(1)
    {
        if(x == 1)
        {
            x = a;
            open++;
        }
        else if(x == 2)
        {
            x = b;
            open++;
        }
        else if(x == 3)
        {
            x = c;
            open++;
        }
        else
            break;
    }
    if(open == 3)
        printf("YES\n");
    else
        printf("NO\n");
}
