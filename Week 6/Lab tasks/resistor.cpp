#include <iostream>
using namespace std;
main()
{
    cout << "Enter the number of resistors in the series circuit:" << endl;
    int r;
    cin >> r;

    float arr[100];
    float resistance = 0.0;

    cout << "Enter the resistance values (in ohms) of the " << r << "resistors,one per line:" << endl;
    for (int i = 0; i < r; i = i + 1)
    {
        cin >> arr[i];
        resistance = resistance + arr[i];
    }
    cout << "Total resistance of the series circuit is " << resistance <<" ohms " <<endl;
}