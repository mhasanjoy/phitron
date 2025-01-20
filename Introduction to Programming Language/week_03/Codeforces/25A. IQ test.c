#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x, i, odd = 0, odd_index, even_index;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if(x % 2)
        {
            odd++;
            odd_index = i + 1;
        }
        else
            even_index = i + 1;
    }

    if(odd == 1)
        printf("%d\n", odd_index);
    else
        printf("%d\n", even_index);

    return 0;
}
