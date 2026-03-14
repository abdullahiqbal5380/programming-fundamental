#include<iostream>
using namespace std;
main()
{
    cout << "Are your friends going? (Press Y for yes):";
    char going;
    cin >> going;
    if (going == 'y'){
        cout << "You are also going!";
    }
    else{
         cout << "You are not going!";
    }
    }
