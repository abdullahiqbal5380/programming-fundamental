#include<iostream>
using namespace std;
main()
{
    string my_Password;
    my_Password = "abd@123";
    cout << "Enter the password:";
    string user_Password;
    cin >> user_Password;
    if (user_Password == my_Password){
        cout << "Wow!";
    }
    else{
        cout << "Invalid Password";
    }
    }

