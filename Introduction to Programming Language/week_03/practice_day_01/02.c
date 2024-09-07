#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], j;
    for(j = 0; j < n; j++){
        scanf("%d", &arr[j]);
    }

    int q, i, v;
    scanf("%d", &q);
    for(j = 0; j < q; j++){
        scanf("%d %d", &i, &v);
        arr[i] = arr[i] + v;
    }

    for(j = 0; j < n; j++){
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
