#include <iostream>
using namespace std;
int countIdenticalArrays(int arr[][3], int rowSize)
{
    int identicalRows = 0;
    for (int i = 0; i < rowSize; i++)
    {
        bool isIdentical = false;
        for (int j = 0; j < rowSize; j++)
        {
            if (i == j)
                continue;

            if (arr[i][0] == arr[j][0] && arr[i][1] == arr[j][1] && arr[i][2] == arr[j][2])
            {
                isIdentical = true;
                break;
            }
        }
        if (isIdentical)
        {
            identicalRows++;
        }
    }
    return identicalRows;
}
int main()
{
    int rowSize;
    cout << "Enter row size:";
    cin >> rowSize;

    int arr[rowSize][3];

    cout << "Enter the elments of the array:" << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at position [" << i << "[" << j << "]:";
            cin >> arr[i][j];
        }
    }
    int result = countIdenticalArrays(arr, rowSize);
    cout << "The count of identical rows in the array is:" << result << endl;
}