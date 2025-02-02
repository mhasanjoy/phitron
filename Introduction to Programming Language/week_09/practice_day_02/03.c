#include<stdio.h>

void solve(FILE *inputFile, FILE *outputFile)
{
    int n, i;
    fscanf(inputFile, "%d", &n);
    if(n > 0)
        for(i = n; i >= - n; i--)
            fprintf(outputFile, "%d ", i);
    else
        for(i = n; i <= - n; i++)
            fprintf(outputFile, "%d ", i);
    fprintf(outputFile, "\n");
}

int main()
{
    FILE *inputFile = fopen("input3.txt", "r");
    FILE *outputFile = fopen("output3.txt", "w");
    if(inputFile == NULL)
    {
        printf("File not found.\n");
        return 0;
    }

    int t;
    fscanf(inputFile, "%d", &t);
    while(t--)
        solve(inputFile, outputFile);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
