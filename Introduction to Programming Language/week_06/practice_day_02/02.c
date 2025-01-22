#include<stdio.h>
#include<math.h>

void pattern(int n);
int next_primary(int previous);

int main()
{
    int n;
    scanf("%d", &n);
    pattern(n);

    return 0;
}

void pattern(int n)
{
    int i, j, previous = 1;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            previous = next_primary(previous);
            printf("%d ", previous);
        }
        printf("\n");
    }
}

int next_primary(int previous)
{
    int num = previous + 1, root, i;
    while(1)
    {
        root = (int)sqrt(num);
        for(i = 2; i <= root; i++)
        {

            if(num % i == 0)
            {
                num++;
                break;
            }
        }
        if(i == root + 1)
            return num;
    }
}
