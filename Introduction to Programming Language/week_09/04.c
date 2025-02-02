// file
#include<stdio.h>

int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");
    //FILE *logFile = fopen("output.txt", "a");
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
        sum += x;
    }
    fprintf(outputFile, "%d\n", sum);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
