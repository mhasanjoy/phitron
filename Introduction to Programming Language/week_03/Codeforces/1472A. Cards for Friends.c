#include<stdio.h>

int main()
{
    int t, w, h, n;
    scanf("%d", &t);
    int pieces[t], i;

    for(i = 0; i < t; i++){
        pieces[i] = 1;

        scanf("%d %d %d", &w, &h, &n);

        while(w % 2 == 0){
            pieces[i] = pieces[i] * 2;
            w = w / 2;
        }
        while(h % 2 == 0){
            pieces[i] = pieces[i] * 2;
            h = h / 2;
        }

        if(pieces[i] >= n){
            pieces[i] = 1;
        }
        else{
            pieces[i] = 0;
        }
    }

    for(i = 0; i < t; i++){
        if(pieces[i]){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
