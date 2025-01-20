#include<stdio.h>

int main()
{
    int t, i, x, minutes;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d%%", &x);
        if(x <= 60)
            minutes = (60 - x) + 20 * 2 + 20 * 3;
        else if(x <= 80)
            minutes = (80 - x) * 2 + 20 * 3;
        else
            minutes = (100 - x) * 3;

        printf("%d minutes\n", minutes);
    }

    return 0;
}
