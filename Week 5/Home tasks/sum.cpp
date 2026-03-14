#include<iostream>
using namespace std;
main()
{
    int num;
    int sum = 0;
    while (num >= 0){
        cout << "Enter a number:"  <<endl;
        cin >> num;
        sum = sum + num;
    }
    cout << "Sum : " <<sum <<endl;
}