#include<stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);
    long long int s, a, b, c, missing_number[t];
    for(i = 0; i < t; i++){
        scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
        missing_number[i] = s - a - b - c;
    }

    for(i = 0; i <t; i++){
        printf("%lld\n", missing_number[i]);
    }

    return 0;
}
