#include<stdio.h>

void print_even(int n);

int main()
{
    int n;
    scanf("%d", &n);
    print_even(n);

    return 0;
}

void print_even(int n)
{
    int i;
    for(i = 2; i <= n; i += 2)
        printf("%d ", i);
    printf("\n");
}
