#include <iostream>
using namespace std;
main()
{
    cout << "Enter the  number of elements:" << endl;
    int n;
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input.Number of elements must be greater than zero." << endl;
        return 0;
    }

    int arr[100];
    cout << "Enter " << n << " numbers,one per line:" << endl;
    for (int i = 0; i < n; i = i + 1)
    {
        cin >> arr[i];
    }
    cout << "Numbers in reverse order:";
    for (int i = n - 1; i >= 0; i = i - 1)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}