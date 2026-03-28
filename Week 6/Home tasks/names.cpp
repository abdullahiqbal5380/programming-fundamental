#include <iostream>
using namespace std;
main()
{
    string names[5];
    cout << "Enter names of 5 students:" << endl;
    for (int i = 0; i < 5; i = i + 1)
    {
        cin >> names[i];
    }
    cout << "Student Names are:" << endl;
    for (int i = 0; i < 5; i = i + 1)
    {
        cout << names[i] <<endl;
    }
}