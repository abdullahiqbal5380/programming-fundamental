#include<iostream>
using namespace std;
main()
{
    cout << "Please Enter the number:";
    int num;
    cin >> num;
    int even;
    even = num%2;
    if (even==0){
        cout << "The number is even";
    }
   else{
    cout << "The number is odd";
   }
}