#include<stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n], i;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 1){
            sum += arr[i];
        }
    }

    if(sum % 2 == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
