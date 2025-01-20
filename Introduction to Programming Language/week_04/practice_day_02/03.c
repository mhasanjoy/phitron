#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char s[20];
    scanf("%s", s);
    int i, length = strlen(s), cost = 0;
    for(i = 0; i < length; i++)
        cost += s[i] - 96;

    for(i = 0; pow(2, i) <= cost; i++)
    {
        if((int)pow(2, i) == cost)
        {
            printf("YES\n");
            printf("cost = 2^%d\n", i);
            break;
        }
    }
    if((int)pow(2, i) > cost)
        printf("NO\n");

    return 0;
}
