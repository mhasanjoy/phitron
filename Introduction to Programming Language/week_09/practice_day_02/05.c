#include<stdio.h>

int main()
{
    FILE *inputFile = fopen("input5.txt", "r");
    FILE *outputFile = fopen("output5.txt", "w");
    if(inputFile == NULL)
    {
        printf("File not found.\n");
        return 0;
    }

    int n, i, j;
    fscanf(inputFile, "%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = n - i; j >= 1; j--)
            fprintf(outputFile, " ");
        for(j = 1; j <= n; j++)
            fprintf(outputFile, "#");
        fprintf(outputFile, "\n");
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
