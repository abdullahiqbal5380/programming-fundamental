#include <iostream>
using namespace std;
main()
{
    cout << "Enter the number of elements:" << endl;
    int num;
    cin >> num;

    int n[100];
    int sum = 0;

    cout << "Enter " << num << "numbers:" << endl;
    for (int i = 0; i < num; i = i + 1)
    {
        cin >> n[i];
        sum = sum + n[i];
    }
    cout << "Sum of all elements:" << sum << endl;
}