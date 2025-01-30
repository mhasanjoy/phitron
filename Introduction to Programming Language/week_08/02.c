// dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n = 3, i, *ptr;
    ptr = (int*) malloc(n * sizeof(int));
    // ptr = (int*) calloc(n, sizeof(int));

    if(ptr == NULL)
        printf("Memory allocation failed.\n");
    else
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &ptr[i]);
            // scanf("%d", (ptr + i));
        }
        for(i = 0; i < n; i++)
        {
            printf("%d ", ptr[i]);
            // printf("%d ", *(ptr + i));
        }
        printf("\n");
    }

    n = 5;
    ptr = realloc(ptr, n * sizeof(int));
    if(ptr == NULL)
        printf("Memory allocation failed.\n");
    else
    {
        for(i = 3; i < n; i++)
            scanf("%d", (ptr + i));
        for(i = 0; i < n; i++)
            printf("%d ", *(ptr + i));
        printf("\n");
    }

    free(ptr);

    return 0;
}
