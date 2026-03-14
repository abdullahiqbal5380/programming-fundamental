#include<iostream>
using namespace std;
main()
{
    cout << "Enter any character in lower case:"   <<endl;
    char ch;
    cin >> ch;
    if (ch >= '0' && ch <= '9'){
        cout << "It is a number"   <<endl;
    }
     else if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout << "It is a vowel"   <<endl;
    }
    else{
        cout << "It is a consonant"   <<endl;
    }
}