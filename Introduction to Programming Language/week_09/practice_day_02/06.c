#include<stdio.h>

int main()
{
    FILE *inputFile = fopen("input6.txt", "r");
    FILE *outputFile = fopen("output6.txt", "a");
    if(inputFile == NULL)
    {
        printf("File not found.\n");
        return 0;
    }

    int year;
    fscanf(inputFile, "%d", &year);
    if(year % 400 == 0)
        fprintf(outputFile, "%d --> YES\n", year);
    else if(year % 4 == 0 && year % 100)
        fprintf(outputFile, "%d --> YES\n", year);
    else
        fprintf(outputFile, "%d --> NO\n", year);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
