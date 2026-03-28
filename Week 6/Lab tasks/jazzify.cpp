#include <iostream>
using namespace std;
main()
{
    cout << "Enter the number of chords:";
    int num;
    cin >> num;

    string chords[100];
    cout << "Enter" << num << "chords,one per line:" << endl;
    for (int i = 0; i < num; i = i + 1)
    {
        cin >> chords[i];
    }
    cout << "Jazzified chords: [";
    for (int i = 0; i < num; i = i + 1)
    {
        string ch = chords[i];

        if (ch.back() != '7')
        {
            ch = ch + "7";
        }
        cout << ch;
        if (i < num - 1)
        {
            cout << ",";
        }
        else
        {
            cout << "]";
        }
    }
}