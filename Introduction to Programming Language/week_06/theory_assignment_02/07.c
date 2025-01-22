#include<stdio.h>
#include<stdbool.h>

float median(int arr[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%0.2f\n", median(arr, n));

    return 0;
}

float median(int arr[], int n)
{
    int i, j, temp;
    bool swapped;
    for(i = 0; i < n - 1; i++)
    {
        swapped = false;
        for(j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }

    if(n % 2)
        return arr[n / 2];
    else
        return (arr[n / 2] + arr[(n / 2) - 1]) / 2.0;
}
