#include<iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter a string:"<<endl;
    getline(cin,word);

    for (int i=0 ;i<word.length() ;i=i+1){

        if (word[i] >= 'a' && word[i] < 'z' || word[i] >= 'A' && word[i] < 'Z' ){
            word[i] = word[i]+1;
        }
        else if (word[i] == 'z'){
            word[i]='a';
        }
        else if (word[i] == 'Z'){
            word[i]='A';
        }
    }
    cout << "Shifted string:"<<word<<endl;
}