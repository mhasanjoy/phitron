#include<stdio.h>

void sort_arr(int arr[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sort_arr(arr, n);
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void sort_arr(int arr[], int n)
{
    int i, j, min_idx, temp;
    for(i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }
        if(min_idx != i)
        {
            temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
}
