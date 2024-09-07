#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i;

    for(i = 0; i < n; i++){
        if(i == 0){
            arr[i] = 0;
        }
        else if(i == 1){
            arr[i] = 1;
        }
        else{
            arr[i] = arr[i - 1] + arr[i - 2];
        }
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
