#include<stdio.h>

int main()
{
    int n, k, participant = 0;
    scanf("%d %d", &n, &k);
    int a[n], i;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++){
        if(a[i] > 0 && a[i] >= a[k-1]){
            participant++;
        }
    }
    printf("%d\n", participant);

    return 0;
}
