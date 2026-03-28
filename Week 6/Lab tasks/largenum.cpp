#include <iostream>
using namespace std;
main()
{
    cout << "Enter the number of elements:" << endl;
    int n;
    cin >> n;

    int arr[100];
    cout << "Enter" << n << "numbers,one per line:" << endl;
    for (int i = 0; i < n; i = i + 1)
    {
        cin >> arr[i];
    }
    int largest = arr[0];
    for (int i = 1; i < n; i = i + 1)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest number is:" << largest << endl;
}
