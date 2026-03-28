#include<iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter a string:" <<endl;
    getline(cin,word);

    int length = 0;
    while (word[length] != '\0'){
        length=length+1;
    }

    cout << "Reversed String:"<<endl;
    for (int i=length-1 ;i>=0 ;i=i-1){
        cout << word[i];
    }


}