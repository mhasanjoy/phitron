#include<stdio.h>

void print(int n);

int main()
{
    int n;
    scanf("%d", &n);
    print(n);

    return 0;
}

void print(int n)
{
    if(n == 1)
        printf("1\n");
    else
    {
        printf("%d ", n);
        print(n - 1);
    }
}
