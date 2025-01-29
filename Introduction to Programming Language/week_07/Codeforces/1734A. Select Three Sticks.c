#include<stdio.h>

void solve();
void selection_sort(int *arr, int n);

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solve();

    return 0;
}

void solve()
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    selection_sort(a, n);

    int min_operation = (a[2] - a[1]) + (a[1] - a[0]);
    for(i = 3; i < n; i++)
    {
        if(min_operation > (a[i] - a[i - 1]) + (a[i - 1] - a[i - 2]))
            min_operation = (a[i] - a[i - 1]) + (a[i - 1] - a[i - 2]);
    }
    printf("%d\n", min_operation);
}

void selection_sort(int *arr, int n)
{
    int i, j, min_idx, temp;
    for(i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for(j = i + 1; j < n; j++)
            if(arr[j] < arr[min_idx])
                min_idx = j;

        if(min_idx != i)
        {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}
