#include<stdio.h>

int main()
{
    int n, m, k, i, a, min = 0;
    scanf("%d %d %d", &n, &m, &k);
    for(i = 1; i <= n; i++){
        scanf("%d", &a);

        if(a == 1){
            if(m == 0){
                m++;
                min++;
            }
            m--;
        }
        else{
            if(k > 0){
                k--;
            }
            else{
                if(m == 0){
                    m++;
                    min++;
                }
                m--;
            }
        }
    }
    printf("%d\n", min);

    return 0;
}
