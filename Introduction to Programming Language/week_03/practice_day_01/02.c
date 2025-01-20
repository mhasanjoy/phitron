#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i, q, index, v;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &q);
    for(i = 1; i <= q; i++)
    {
        scanf("%d %d", &index, &v);
        arr[index] += v;
    }

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
