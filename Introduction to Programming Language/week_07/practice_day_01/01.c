#include<stdio.h>

int count(int* arr, int n, int k);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i, k;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    printf("%d\n", count(arr, n, k));

    return 0;
}

int count(int* arr, int n, int k)
{
    int i, count = 0;
    for(i = 0; i < n; i++)
        if(arr[i] != k)
            count++;
    return count;
}
