#include<stdio.h>

int main()
{
    int t, x;
    scanf("%d", &t);
    int minutes[t], i;
    for(i = 0; i < t; i++){
        scanf("%d%%", &x);

        if(x < 60){
            minutes[i] = (60 - x) + 100;
        }
        else if(x < 80){
            minutes[i] = (80 - x) * 2 + 60;
        }
        else{
            minutes[i] = (100 - x) * 3;
        }
    }

    for(i = 0; i < t; i++){
        printf("%d minutes\n", minutes[i]);
    }

    return 0;
}
