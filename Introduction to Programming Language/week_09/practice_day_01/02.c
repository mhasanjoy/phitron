#include<stdio.h>

int solve(int arr[], int n)
{
    if(n == 1)
        return arr[0] % 10;
    return arr[n - 1] % 10 + solve(arr, n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d\n", solve(arr, n));

    return 0;
}
