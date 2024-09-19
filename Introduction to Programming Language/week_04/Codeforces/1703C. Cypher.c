#include<stdio.h>

int main()
{
    int t, k;
    scanf("%d", &t);
    for(k = 0; k < t; k++){
        int n;
        scanf("%d", &n);
        int a[n], i, b[n], j;
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for(i = 0; i < n; i++){
            scanf("%d ", &b[i]);
            char moves[n][b[i] + 1];
            scanf("%s", moves[i]);

            for(j = b[i] - 1; j >= 0; j--){
                if(moves[i][j] == 'U' && a[i] > 0){
                    a[i]--;
                }
                else if(moves[i][j] == 'U' && a[i] == 0){
                    a[i] = 9;
                }
                else if(moves[i][j] == 'D' && a[i] < 9){
                    a[i]++;
                }
                else{
                    a[i] = 0;
                }
            }
        }

        for(i = 0; i < n; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
