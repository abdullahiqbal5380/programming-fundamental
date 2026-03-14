#include<iostream>
using namespace std;
main()
{
  cout << "Enter your name:";
  string name;
  cin >> name;
  if (name == "ali"){
    cout << "Welcome"<< name;
  }
   if (name != "ali"){
    cout << "Try again!";
   }
}