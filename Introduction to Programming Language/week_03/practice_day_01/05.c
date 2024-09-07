#include<stdio.h>

int main()
{
    int n, target;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                break;
            }
        }

        if(j < n){
            break;
        }
    }

    if(i < n - 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
