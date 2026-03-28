#include <iostream>
using namespace std;
main()
{
    cout << "Enter number of Customers:" << endl;
    int num;
    cin >> num;

    string names[100];
    char letter;
    int count = 0;

    cout << "Enter names of " << num << " Customers:" << endl;
    for (int i = 0; i < num; i = i + 1)
    {
        cin >> names[i];
    }
    cout << "Enter the letter:";
    cin >> letter;

    for (int i = 0; i < num; i = i + 1)
    {
        if (names[i][0] == letter)
        {
            count++;
        }
    }
    cout << " Total names starting with " << letter << ":" << count << endl;
}