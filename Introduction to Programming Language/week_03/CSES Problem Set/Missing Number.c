#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i, x;

    for(i = 0; i < n; i++){
        arr[i] = 0;
    }
    for(i = 0; i < n - 1; i++){
        scanf("%d", &x);
        arr[x-1] = 1;
    }
    for(i = 0; i < n; i++){
        if(arr[i] == 0){
            printf("%d\n", i + 1);
            break;
        }
    }

    return 0;
}
