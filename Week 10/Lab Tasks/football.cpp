#include <iostream>
using namespace std;

bool isGoalScored(char field[7][16])
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (field[i][j] == '0')
            {
                if (i < 4 && j > 1 && j < 9)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    char field[7][16] = {{"#     0    #  "},
                         {"#          #  "},
                         {"#          #  "},
                         {"#          #  "},
                         {"###########   "},
                         {"      #       "},
                         {"      #       "}};
    if (isGoalScored(field))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}