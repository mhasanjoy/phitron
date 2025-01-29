#include<stdio.h>

void sorted(int* arr, int n);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i, k;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    sorted(arr, n);
    printf("%dth largest element = %d\n", k, arr[n - k]);
    printf("%dth smallest element = %d\n", k, arr[k - 1]);

    return 0;
}

void sorted(int* arr, int n)
{
    int i, j, min_idx, temp;
    for(i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                temp = arr[j];
                arr[j] = arr[min_idx];
                arr[min_idx] = temp;
            }
        }
    }
}
