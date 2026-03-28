#include <iostream>
using namespace std;
main()
{
    cout << "Enter number of elements:" << endl;
    int num;
    cin >> num;

    int n[100];
    int count = 0;

    cout << "Enter" << num << "numbers:" << endl;
    for (int i = 0; i < num; i = i + 1)
    {
        cin >> n[i];
        if (n[i] % 2 == 0)
        {
            count++;
        }
    }
    cout << "Total Even Numbers:" << count << endl;
}