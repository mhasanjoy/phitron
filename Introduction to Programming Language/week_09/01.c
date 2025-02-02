// sum of array elements (recursion)
#include<stdio.h>

int solve(int arr[], int n)
{
    if(n == 1)
        return arr[0];
    return arr[n - 1] + solve(arr, n - 1);
    //return arr[0] + solve(arr + 1, n - 1);
    //return *arr + solve(arr + 1, n - 1);
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
