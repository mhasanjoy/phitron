#include<stdio.h>

void swap(int *x, int *y);
void array_order(int a[], int n, char order);

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n], i;
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    array_order(a, n, 'a');
    array_order(b, n, 'd');

    for(i = 0; i < n; i++)
        printf("%d ", a[i] - b[i]);
    printf("\n");

    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void array_order(int arr[], int n, char order)
{
    int i, j, min_idx, max_idx;
    for(i = 0; i < n - 1; i++)
    {
        min_idx = i;
        max_idx = i;
        for(j = i + 1; j < n; j++)
        {
            if(order == 'a' && arr[j] < arr[min_idx])
                min_idx = j;
            else if(order == 'd' && arr[j] > arr[max_idx])
                max_idx = j;
        }
        if(order == 'a' && i != min_idx)
            swap(&arr[i], &arr[min_idx]);
        else if(order == 'd' && i != max_idx)
            swap(&arr[i], &arr[max_idx]);
    }
}
