#include <iostream>
using namespace std;
main()
{
    cout << "Enter number of elements:" << endl;
    int num;
    cin >> num;

    int n[100];

    cout << "Enter" << num << " numbers:" << endl;
    for (int i = 0; i < num; i = i + 1)
    {
        cin >> n[i];
    }

    int largest = n[0];
    int smallest = n[0];

    for (int i = 1; i < num; i = i + 1)
    {

        if (n[i] > largest)
        {
            largest = n[i];
        }
        if (n[i] < smallest)
        {
            smallest = n[i];
        }
    }
    cout << "Largest number is " << largest << endl;
    cout << "Smallest number is" << smallest << endl;
}
