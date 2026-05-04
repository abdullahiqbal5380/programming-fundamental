#include <iostream>
using namespace std;

char objects[5][5] = {{'-', '#', '#', '-', '#'},
                      {'#', '-', '-', '#', '-'},
                      {'-', '#', '-', '-', '-'},
                      {'#', '-', '#', '-', '#'},
                      {'#', '-', '-', '-', '-'}};
bool gravity = false;
bool isBlackHole = true;
void displayWorld()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << objects[i][j] << " ";
        }
        cout << endl;
    }
}
void setGravityStatus(bool status)
{
    gravity = status;
}
void timeTick(int times)
{
    if (!gravity)
        return;
    for (int t = 0; t < times; t++)
    {
        char nextState[5][5];
        // Initialize nextState with empty space
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                nextState[i][j] = '-';
                for (int i = 0; i < 5; i++)
                {
                    for (int j = 0; j < 5; j++)
                    {
                        if (objects[i][j] == '#')
                        {
                            int nextRow = i + 1;
                            if (nextRow < 5)
                            {
                                // Regular fall
                                nextState[nextRow][j] = '#';
                            }
                            else if (isBlackHole)
                            {
                                // Black hole logic:wrap around to the first row
                                nextState[0][j] = '#';
                            }
                            else
                            {
                                // Solid ground logic
                                nextState[i][j] = '#';
                            }
                        }
                    }
                }
            }
        }
        // Update the original array for next tick
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                objects[i][j] = nextState[i][j];
            }
        }
    }
}
int main()
{
    cout << "Initial World:" << endl;
    displayWorld();
    setGravityStatus(true);
    timeTick(1);
    cout << "World after 3 ticks(Black Hole Active):" << endl;
    displayWorld();
}