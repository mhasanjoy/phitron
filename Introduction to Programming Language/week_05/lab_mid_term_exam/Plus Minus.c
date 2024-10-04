#include<stdio.h>

int main()
{
    int n, i, max = 1, current = 1;
    scanf("%d ", &n);
    char signs[n];
    scanf("%s", signs);

    for(i = 1; i < n; i++){
        if(signs[i] == signs[i - 1]){
            current++;
        }
        else{
            current = 1;
        }

        if(max < current){
            max = current;
        }
    }
    printf("%d\n", max);

    return 0;
}
