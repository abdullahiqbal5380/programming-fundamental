#include <iostream>
using namespace std;

const int rows = 25;
const int col = 50;
char board[rows][col];

void initializeBoard()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == col - 1)
            {
                board[i][j] = '#';
            }
            else
            {
                board[i][j] = ' ';
            }
        }
    }
    board[20][25] = 'P';
    board[5][10] = 'e';
    board[10][30] = 'x';
    board[3][40] = 'x';
}
void printBoard()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
}
void movePlayerLeft()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (board[i][j] == 'P' && board[i][j - 1] == ' ')
            {
                board[i][j - 1] = 'P';
                board[i][j] = ' ';
                return;
            }
        }
    }
}
void movePlayerRight()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = col - 2; j >= 0; j--)
        {
            if (board[i][j] == 'P' && board[i][j + 1] == ' ')
            {
                board[i][j + 1] = 'P';
                board[i][j] = ' ';
                return;
            }
        }
    }
}
void fire()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (board[i][j] == 'P' && board[i - 1][j] == ' ')
            {
                board[i - 1][j] = '.';
                return;
            }
        }
    }
}
void moveFire(int timeStep){
    for(int i=1;i<rows-1;i++){
        for(int j=1;j<col-1;j++){
            if(board[i][j] == '.'){
                board[i][j] = ' ';
                if(board[i-1][j] == ' '){
                    board[i-1][j] = '.';
                }
            }
        }
    }
}
void moveEnemy(char object, string direction)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (board[i][j] == object)
            {
                board[i][j] = ' ';
                if (direction == "left" && board[i][j - 1] == ' ')
                {
                    board[i][j - 1] = object;
                }
                else if (direction == "right" && board[i][j + 1] == ' ')
                {
                    board[i][j + 1] = object;
                    return;
                }
            }
        }
    }
}
int main()
{
    initializeBoard();
    char input;
    while (true)
    {
        printBoard();
        cout << "Use 'a' for left,'b' for right,'f' for fire,'q' to quit:";
        cin >> input;

        if (input == 'a')
        {
            movePlayerLeft();
        }
        if (input == 'b')
        {
            movePlayerRight();
        }
        if (input == 'f')
        {
            fire();
        }
        if (input == 'q')
        {
            break;
        }
        moveFire(1);
        moveEnemy('e', "right");
    }
}