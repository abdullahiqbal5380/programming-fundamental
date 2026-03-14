#include<iostream>
using namespace std;
main()
{
    cout << "Enter the first word:";
    string w1;
    cin >> w1;
    cout << "Enter the second word:";
    string w2;
    cin >> w2;
    if (w1 == w2){
        cout << "Yes the words are same";
    }
    else{
        cout << "No the words are different";
    }
    }
