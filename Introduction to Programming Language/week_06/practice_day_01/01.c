#include<stdio.h>

void positive_to_negative(int x);
void negative_to_positive(int x);

int main()
{
    int n;
    scanf("%d", &n);

    if(n > 0)
        positive_to_negative(n);
    else
        negative_to_positive(n);

    return 0;
}

void positive_to_negative(int x)
{
    int i;
    for(i = x; i >= - x; i--)
        printf("%d ", i);
    printf("\n");
}

void negative_to_positive(int x)
{
    int i;
    for(i = x; i <= - x; i++)
        printf("%d ", i);
    printf("\n");
}
