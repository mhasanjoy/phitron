#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    printf("%d\n", arr[k - 1]);

    return 0;
}
