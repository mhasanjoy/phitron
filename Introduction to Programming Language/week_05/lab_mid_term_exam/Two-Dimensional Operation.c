#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m], i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);

            if(arr[i][j] == i + 1 && arr[i][j] == j + 1){
                arr[i][j] += 3;
            }
            else if(arr[i][j] == i + 1){
                arr[i][j] += 2;
            }
            else if(arr[i][j] == j + 1){
                arr[i][j]++;
            }
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
