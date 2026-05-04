#include <iostream>
using namespace std;

string fire(char board[5][5], string coordinate)
{
    int row = coordinate[0] - 'A';
    int col = coordinate[1] - '1';

    if (board[row][col] == '*')
        return "Boom";
    else
    {
        return "Splash";
    }
}
int main()
{
    char board[5][5] = {{'.', '.', '.', '*', '*'},
                        {'.', '*', '.', '.', '.'},
                        {'.', '*', '.', '.', '.'},
                        {'.', '*', '.', '.', '.'},
                        {'.', '.', '*', '*', '.'}};
    string coordinate;
    cout << "Enter coordinate to fire torepedo (e.g.,A1,B3.E5):";
    cin >> coordinate;

    string result = fire(board, coordinate);
    cout << "Result:" << result;
}