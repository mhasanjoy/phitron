#include<stdio.h>

int main()
{
    int n, h, i, a;
    scanf("%d %d", &n, &h);
    int width = n;

    for(i = 1; i <= n; i++){
        scanf("%d", &a);
        if(a > h){
            width++;
        }
    }
    printf("%d\n", width);

    return 0;
}
