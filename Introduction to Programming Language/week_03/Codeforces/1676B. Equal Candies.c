#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d", &t);
    int n[t], i, min[t];
    for(i = 0; i < t; i++){
        min[i] = 0;
        scanf("%d", &n[i]);
        int a[n[i]], j, smallest;
        for(j = 0; j < n[i]; j++){
            scanf("%d", &a[j]);

            if(j == 0){
                smallest = a[j];
            }
            else if(smallest > a[j]){
                smallest = a[j];
            }
        }

        for(j = 0; j < n[i]; j++){
            min[i] += abs(a[j] - smallest);
        }
    }

    for(i = 0; i < t; i++){
        printf("%d\n", min[i]);
    }

    return 0;
}
