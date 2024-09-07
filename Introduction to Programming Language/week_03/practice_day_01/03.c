#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i;
    bool unique = true;

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);

        if(arr[i] != arr[0]){
            unique = false;
        }
    }

    if(unique){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
