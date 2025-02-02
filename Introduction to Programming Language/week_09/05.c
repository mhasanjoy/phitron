// tic-tac-toe
#include<stdio.h>
#include<stdbool.h>

void array_initialization(int arr[][3], int n);
void print_array(int arr[][3], int n);
int is_win(int arr[][3], int n);
bool is_game_over(int arr[][3], int n);

int main()
{
    int n = 3, arr[3][3], row, col;
    array_initialization(arr, n);

    bool player1 = true, player2 = false;
    while(true)
    {
        print_array(arr, n);
        if(is_game_over(arr, n))
            break;

        if(player1)
        {
flag1:
            printf("Player 1 Turn (X), Enter Row and Column: ");
            scanf("%d %d", &row, &col);
            if(arr[row - 1][col - 1] != -1)
            {
                printf("Invalid Cell.\n");
                goto flag1;
            }
            arr[row - 1][col - 1] = 1;
            player1 = false;
            player2 = true;
        }
        else
        {
flag2:
            printf("Player 2 Turn (O), Enter Row and Column: ");
            scanf("%d %d", &row, &col);
            if(arr[row - 1][col - 1] != -1)
            {
                printf("Invalid Cell.\n");
                goto flag2;
            }
            arr[row - 1][col - 1] = 2;
            player2 = false;
            player1 = true;
        }

        if(is_win(arr, n) == 1)
        {
            printf("Player 1 won.\n");
            print_array(arr, n);
            break;
        }
        else if(is_win(arr, n) == 2)
        {
            printf("Player 2 won.\n");
            print_array(arr, n);
            break;
        }
    }

    return 0;
}

void array_initialization(int arr[][3], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            arr[i][j] = -1;
}

void print_array(int arr[][3], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        printf("\n");
        for(j = 0; j < n; j++)
        {
            if(arr[i][j] == -1)
                printf("\t \t");
            else if(arr[i][j] == 1)
                printf("\tX\t");
            else if(arr[i][j] == 2)
                printf("\tO\t");
            if(j < n - 1)
                printf("|");
        }
        printf("\n");
        if(i < n - 1)
            printf("____________________________________________________");
        printf("\n");
    }
}

int is_win(int arr[][3], int n)
{
    int i;
    for(i = 0; i < n; i++)
        if(arr[i][0] != -1 && arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
            return arr[i][0];
    for(i = 0; i < n; i++)
        if(arr[0][i] != -1 && arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
            return arr[0][i];
    if(arr[0][0] != -1 && arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
        return arr[0][0];
    else if(arr[0][2] != -1 && arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
        return arr[0][2];
    return -1;
}

bool is_game_over(int arr[][3], int n)
{
    int i, j, initial_value = 0;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            if(arr[i][j] == -1)
                initial_value++;
    if(!initial_value)
        return true;
    else
        return false;
}
