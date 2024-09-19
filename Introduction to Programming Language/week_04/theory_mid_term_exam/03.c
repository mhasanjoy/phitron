#include<stdio.h>

int main()
{
    int n = 15;
    int arr[n], i;
    for(i = 0; i < n; i++){
        if(i == 0){
            arr[i] = 1;
        }
        else{
            arr[i] = arr[i - 1] * 2;
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
