#include<stdio.h>

int sum(int *arr, int n);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", sum(arr, n));

    return 0;
}

int sum(int *arr, int n)
{
    int i, s = 0;
    for(i = 0; i < n; i++)
        if(arr[i] % 10 == 0)
            s += arr[i];
    return s;
}
