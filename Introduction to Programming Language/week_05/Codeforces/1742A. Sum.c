#include<stdio.h>

int main()
{
    int t, i, a, b, c;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d %d %d", &a, &b, &c);

        if(a + b == c || b + c == a || c + a == b){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
