#include<stdio.h>

int main()
{
    int n, i, p, v, t, solved=0;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d %d %d", &p, &v, &t);

        if(p + v + t >= 2)
            solved++;
    }
    printf("%d\n", solved);

    return 0;
}
