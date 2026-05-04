#include <iostream>
using namespace std;

void largestColumnFirst(int matrix[][5], int rowSize)
{
    int maxSum = 0;
    int maxColIndex = 0;

    for (int j = 0; j < 5; j++)
    {
        int currentSum = 0;
        for (int i = 0; i < rowSize; i++)
        {
            currentSum = currentSum + matrix[i][j];
        }
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            maxColIndex = j;
        }
    }
    for (int i = 0; i < rowSize; i++)
    {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][maxColIndex];
        matrix[i][maxColIndex] = temp;
    }
}

int main()
{
    int rowSize;
    cout << "Enter row size:";
    cin >> rowSize;

    int matrix[rowSize][5];

    cout << "Enter the elments of the matrix:" << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter element at position [" << i << "[" << j << "]:";
            cin >> matrix[i][j];
        }
    }
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    largestColumnFirst(matrix, rowSize);
    cout << "Matrix after largest column moved to first:" << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}