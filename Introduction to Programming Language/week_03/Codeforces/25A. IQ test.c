#include<stdio.h>

int main()
{
    int n, i, x, even = 0, even_position, odd = 0, odd_position;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &x);

        if(x % 2 == 0){
            even++;
            even_position = i;
        }
        else{
            odd++;
            odd_position = i;
        }
    }

    if(even == 1){
        printf("%d\n", even_position);
    }
    else{
        printf("%d\n", odd_position);
    }

    return 0;
}
