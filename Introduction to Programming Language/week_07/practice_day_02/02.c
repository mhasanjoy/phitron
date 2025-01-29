#include<stdio.h>
#include<stdbool.h>

void bubble_sort(int *arr, int n);
void swap(int *p, int *q);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    bubble_sort(arr, n);
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void bubble_sort(int *arr, int n)
{
    int i, j;
    bool swapped;
    for(i = 0; i < n - 1; i++)
    {
        swapped = false;
        for(j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
