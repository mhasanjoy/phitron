#include<stdio.h>
#include<string.h>
#include<math.h>

void solve(char* s, int length);

int main()
{
    char s[10];
    scanf("%s", s);
    solve(s, strlen(s));

    return 0;
}

void solve(char* s, int length)
{
    int i, cost = 0;
    for(i = 0; i < length; i++)
        cost += s[i] - 96;

    for(i = 0; pow(2, i) <= cost; i++)
        if(pow(2, i) == cost)
            break;

    if(pow(2, i) == cost)
    {
        printf("YES\n");
        printf("cost = 2^%d\n", i);
    }
    else
        printf("NO\n");
}
