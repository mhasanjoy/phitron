#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i, j, min_index, temp;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++){
        min_index = i;
        for(j = i + 1; j < n; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        if(min_index != i){
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
