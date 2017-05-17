#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int board[3][3] = {
    {-1, -1, -1},
    {-1, -1, -1},
    {-1, -1, -1}
};
int count = 0;
void print()
{
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf(" %d ", board[i][j]);
        }
        printf("\n");
    }
    printf("-----------------\n");
}
int checkIfFull()
{
    count = 0;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            if (board[i][j] == -1)
            {
                
                count++;
                
            }
        }
    }
    printf("There are %d missing values \n", count);
    if (count == 0)
    {
        //printf("end\n");
        return 1;
    }
    return 0;
    
}
void gamePlay1()
{
    int selection;
    printf("Player 1, it is your turn:\n");
    scanf("%d", &selection);
    if (selection == 1)
    {
        board[0][0] = 1;
    }
    else if (selection == 2)
    {
        board[0][1] = 1;
    }
    else if (selection == 3)
    {
        board[0][2] = 1;
    }
    else if (selection == 4)
    {
        board[1][0] = 1;
    }
    else if (selection == 5)
    {
        board[1][1] = 1;
    }
    else if (selection == 6)
    {
        board[1][2] = 1;
    }
    else if (selection == 7)
    {
        board[2][0] = 1;
    }
    else if (selection == 8)
    {
        board[2][1] = 1;
    }
    else if (selection == 9)
    {
        board[2][2] = 1;
    }
    print();
}
void gamePlay0()
{
    int selection;
    printf("Player 0, it is your turn:\n");
    scanf("%d", &selection);
    if (selection == 1)
    {
        board[0][0] = 0;
    }
    else if (selection == 2)
    {
        board[0][1] = 0;
    }
    else if (selection == 3)
    {
        board[0][2] = 0;
    }
    else if (selection == 4)
    {
        board[1][0] = 0;
    }
    else if (selection == 5)
    {
        board[1][1] = 0;
    }
    else if (selection == 6)
    {
        board[1][2] = 0;
    }
    else if (selection == 7)
    {
        board[2][0] = 0;
    }
    else if (selection == 8)
    {
        board[2][1] = 0;
    }
    else if (selection == 9)
    {
        board[2][2] = 0;
    }
    print();
}
int checkIf0Won()
{
    if (board[0][0] == 0 && board[0][1] == 0 && board[0][2] == 0)
    {
        printf("0 Won\n");
        return 1;
    }
    else if (board[0][0] == 0 && board[1][1] == 0 && board[2][2] == 0)
    {
        printf("0 Won\n");
        return 1;
    }
    else if (board[0][0] == 0 && board[1][0] == 0 && board[2][0] == 0)
    {
        printf("0 Won\n");
        return 1;
    }
    else if (board[0][1] == 0 && board[1][1] == 0 && board[2][1] == 0)
    {
        printf("0 Won\n");
        return 1;
    }
    else if (board[0][2] == 0 && board[1][2] == 0 && board[2][2] == 0)
    {
        printf("0 Won\n");
        return 1;
    }
    else if (board[1][0] == 0 && board[1][1] == 0 && board[1][2] == 0)
    {
        printf("0 Won\n");
        return 1;
    }
    else if (board[2][0] == 0 && board[2][1] == 0 && board[2][2] == 0)
    {
        printf("0 Won\n");
        return 1;
    }
    else if (board[2][0] == 0 && board[1][1] == 0 && board[0][2] == 0)
    {
        printf("0 Won\n");
        return 1;
    }
    else{
        return 0;
    }
}
int checkIf1Won()
{
    if (board[0][0] == 1 && board[0][1] == 1 && board[0][2] == 1)
    {
        printf("1 Won\n");
        return 1;
    }
    else if (board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1)
    {
        printf("1 Won\n");
        return 1;
    }
    else if (board[0][0] == 1 && board[1][0] == 1 && board[2][0] == 1)
    {
        printf("1 Won\n");
        return 1;
    }
    else if (board[0][1] ==1 && board[1][1] == 1 && board[2][1] == 1)
    {
        printf("1 Won\n");
        return 1;
    }
    else if (board[0][2] == 1 && board[1][2] == 1 && board[2][2] == 1)
    {
        printf("1 Won\n");
        return 1;
    }
    else if (board[1][0] == 1 && board[1][1] == 1 && board[1][2] == 1)
    {
        printf("1 Won\n");
        return 1;
    }
    else if (board[2][0] == 1 && board[2][1] == 1 && board[2][2] == 1)
    {
        printf("1 Won\n");
        return 1;
    }
    else if (board[2][0] == 1 && board[1][1] == 1 && board[0][2] == 1)
    {
        printf("1 Won\n");
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    print();
    while (checkIfFull() !=1)
    {
        
        gamePlay0();
        if (checkIf0Won() == 1)
            {
                printf("Game Over, 0 won\n");
                print();
                break;
            }
        if (checkIfFull() ==1)
        {

            break;
        }
        gamePlay1();
        if (checkIf1Won() == 1)
            {
                printf("Game Over, 1 won\n");
                print();
                break;
            }
        
    }
  
    printf("Game ended\n");
    return 0;
}


