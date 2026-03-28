#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int numbers[100];
    cout << "Enter numbers, one per line:" <<endl;

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        bool duplicate = false;
        for (int j = 0; j < i; j++)
        {
            if (numbers[i] == numbers[j])
            {
                duplicate = true;
                break;
            }
            
        }

        if (duplicate)
        {
            cout << "Already entered: " << numbers[i] << endl;
        }
        else
        {
            cout << "Unique numbers entered: " << numbers[i] << endl;
        }
    }
}
