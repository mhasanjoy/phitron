#include<stdio.h>
#include<string.h>

void sort_string(char *str, int length);

int main()
{
    char str[20];
    scanf("%s", str);
    sort_string(str, strlen(str));
    printf("%s\n", str);

    return 0;
}

void sort_string(char *str, int length)
{
    int i, j, max_idx, temp;
    for(i = 0; i < length - 1; i++)
    {
        max_idx = i;
        for(j = i + 1; j < length; j++)
            if(str[j] > str[max_idx])
                max_idx = j;
        if(max_idx != i)
        {
            temp = str[max_idx];
            str[max_idx] = str[i];
            str[i] = temp;
        }
    }
}
