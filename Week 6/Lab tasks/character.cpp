#include<iostream>
using namespace std;
main()
{
    string word;
    char letter;
    bool isfound = false;
    cout << "Enter a word:" <<endl;
    cin >> word;
    cout << "Enter the letter you want to find:" <<endl;
    cin >> letter;

    for (int i=0; word[i]!='\0'; i=i+1){
        if (word[i]==letter){
            isfound = true;
            break;
        }
    }
    if (isfound){
    cout << letter << " is found in "<<word <<endl;
    }
    else{
        cout << letter << " is not found in " <<word <<endl;

    }
    }