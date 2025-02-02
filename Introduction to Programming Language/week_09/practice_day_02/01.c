#include<stdio.h>

int main()
{
    FILE *inputFile = fopen("input1.txt", "r");
    FILE *outputFile = fopen("output1.txt", "w");
    if(inputFile == NULL)
    {
        printf("File not found.\n");
        return 0;
    }

    char ch;
    while(1)
    {
        ch = fgetc(inputFile);
        if(ch == EOF)
            break;
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
