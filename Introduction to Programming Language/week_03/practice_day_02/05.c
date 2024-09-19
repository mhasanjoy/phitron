#include<stdio.h>
#include<math.h>

int main()
{
    int n , prime = 0;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);

        if(arr[i] <= 1){
            arr[i] = 0;
            continue;
        }
        for(j = 2; j <= (int)sqrt(arr[i]); j++){
            if(arr[i] % j == 0){
                arr[i] = 0;
                break;
            }
        }
        if(j == (int)sqrt(arr[i]) + 1){
            prime++;
        }
    }

    printf("%d\n", prime);
    for(i = 0; i < n; i++){
        if(arr[i]){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
