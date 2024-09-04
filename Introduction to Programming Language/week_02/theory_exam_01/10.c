#include<stdio.h>
#include<math.h>

int main()
{
    int num, i;
    scanf("%d", &num);

    int rt = sqrt(num);
    for(i = 2; i <= rt; i++){
        if(num % i == 0){
            break;
        }
    }
    if(i > rt){
        printf("Prime\n");
    }
    else{
        printf("Composite\n");
    }

    return 0;
}
