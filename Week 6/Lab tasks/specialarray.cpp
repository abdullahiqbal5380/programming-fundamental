#include <iostream>
using namespace std;
main()
{
    cout << "Enter the size of array:" << endl;
    int size;
    cin >> size;

    int num[100];
    cout << "Enter" << size << "elements of the array:" << endl;
    for (int i = 0; i < size; i = i + 1)
    {
        cin >> num[i];
    }
    bool special = true;
    for (int i = 0; i < size; i = i + 1)
    {
        if (i % 2 == 0)
        {
            if (num[i] % 2 != 0)
            {
                special = false;
                break;
            }
        }
        else
        {
            if (num[i] % 2 == 0)
            {
                special = false;
                break;
            }
        }
    }
    if (special)
    {
        cout << "The array is special" << endl;
    }
    else
    {
        cout << "The array is not special" << endl;
    }
}