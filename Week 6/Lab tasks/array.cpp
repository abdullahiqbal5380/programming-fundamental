#include <iostream>
using namespace std;
main()
{
    cout << "Enter the number of elements for the first array (must be 2):" << endl;
    int n1;
    cin >> n1;

    int firstArray[100];
    cout << "Enter " << n1 << " elements for the first array,one per line:" << endl;
    for (int i = 0; i < n1; i = i + 1)
    {
        cin >> firstArray[i];
    }

    cout << "Enter the number of elements for the second array:" << endl;
    int n2;
    cin >> n2;

    int secondArray[100];
    cout << "Enter " << n2 << " elements for the second array,one per line:" << endl;
    for (int i = 0; i < n2; i = i + 1)
    {
        cin >> secondArray[i];
    }
    cout << "Resulting array:[" << firstArray[0];
    for (int i = 0; i < n2; i = i + 1)
    {
        cout << "," << secondArray[i];
    }
    cout << "," << firstArray[1] << "]" << endl;
}
