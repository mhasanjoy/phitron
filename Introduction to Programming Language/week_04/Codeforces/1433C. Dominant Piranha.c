#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d", &t);
    int n, i, dominant[t];
    for(i = 0; i < t; i++){
        scanf("%d", &n);
        int a[n], j, max, min, min_position, diff = n;
        for(j = 0; j < n; j++){
            scanf("%d", &a[j]);

            if(j == 0){
                max = a[j];
                min = a[j];
                min_position = j;
            }
            else if(a[j] < min){
                min = a[j];
                min_position = j;
            }
            else if(a[j] > max){
                max = a[j];
            }
        }

        if(max == min){
            dominant[i] = -1;
            continue;
        }
        for(j = 0; j < n; j++){
            if(max == a[j] && abs(j - min_position) < diff){
                diff = abs(j - min_position);
                dominant[i] = j + 1;
            }
        }
    }

    for(i = 0; i < t; i++){
        printf("%d\n", dominant[i]);
    }

    return 0;
}
