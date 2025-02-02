#include<stdio.h>

int main()
{
    FILE *inputFile = fopen("input2.txt", "r");
    FILE *outputFile = fopen("output2.txt", "w");
    if(inputFile == NULL)
    {
        printf("File not found.\n");
        return 0;
    }

    int n, i;
    fscanf(inputFile, "%d", &n);
    for(i = 1; i <= n; i++)
    {
        fprintf(outputFile, "%d ", i);
    }
    fprintf(outputFile, "\n");

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
