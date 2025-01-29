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
    int l1, r1, l2, r2;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    if(l2 >= l1 && l2 <= r1)
        printf("%d\n", l2);
    else if(l1 >= l2 && l1 <= r2)
        printf("%d\n", l1);
    else
        printf("%d\n", l2 + l1);
}
