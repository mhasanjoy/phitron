#include<stdio.h>

float area(float r);

int main()
{
    float r;
    scanf("%f", &r);
    printf("%f\n", area(r));

    return 0;
}

float area(float r)
{
    return 3.14159 * r * r;
}
