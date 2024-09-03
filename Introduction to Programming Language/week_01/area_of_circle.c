#include<stdio.h>

int main()
{
    int radius;
    printf("Enter the radius of a circle: ");
    scanf("%d", &radius);

    float area = 3.14159 * radius * radius;
    printf("Area: %f\n", area);

    return 0;
}
