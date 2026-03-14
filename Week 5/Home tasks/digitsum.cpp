#include<iostream>
using namespace std;
main()
{
    cout << "Enter a number:" <<endl;
    int n;
    cin >> n;
    int d;
    int sum = 0;
    for (int i=n;i>0;i=i/10){
        d = i%10;
        sum = sum + d;
    }
    cout << "Sum of Digits: " <<sum <<endl;
}