#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i, j, composite = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] == 1)
        {
            arr[i] = 0;
            composite++;
        }
        for(j = 2; j <= sqrt(arr[i]); j++)
        {
            if(arr[i] % j == 0)
            {
                arr[i] = 0;
                composite++;
            }
        }
    }

    printf("%d\n", n - composite);
    for(i = 0; i < n; i++)
    {
        if(arr[i])
            printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
