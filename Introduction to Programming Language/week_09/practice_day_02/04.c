#include<stdio.h>

int main()
{
    FILE *inputFile = fopen("input4.txt", "r");
    FILE *outputFile = fopen("output4.txt", "w");
    if(inputFile == NULL)
    {
        printf("File not found.\n");
        return 0;
    }

    int n, i, x, sum = 0;
    fscanf(inputFile, "%d", &n);
    for(i = 0; i < n; i++)
    {
        fscanf(inputFile, "%d", &x);
        sum += x % 10;
    }
    fprintf(outputFile, "Sum = %d\n", sum);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
