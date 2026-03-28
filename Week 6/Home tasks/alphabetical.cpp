#include <iostream>
#include <algorithm>
using namespace std;
main()
{
    cout << "Enter number of students:" << endl;
    int num;
    cin >> num;

    string names[100];

    cout << "Enter names of students:" << endl;
    for (int i = 0; i < num; i = i + 1)
    {
        cin >> names[i];
    }
    sort(names, names + num);
    cout << "Students in alphabetical order:" << endl;
    for (int i = 0; i < num; i = i + 1)
    {
        cout << names[i] << endl;
    }
}