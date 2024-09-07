#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    long long int min_moves = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);

        if(i > 0 && arr[i] < arr[i-1]){
            min_moves = min_moves + arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    printf("%I64lld\n", min_moves);

    return 0;
}
