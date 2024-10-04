#include<stdio.h>
#include<math.h>

int main()
{
    int n, l, r;
    scanf("%d %d %d", &n, &l, &r);

    int min_element = pow(2, l - 1), i, min = 0;
    int max_element = pow(2, r - 1), max = 0, element = 1;

    for(i = 1; i <= n; i++){
        min += min_element;
        if(min_element > 1){
            min_element /= 2;
        }

        max += element;
        if(element * 2 <= max_element){
            element *= 2;
        }
    }
    printf("%d %d\n", min, max);

    return 0;
}
