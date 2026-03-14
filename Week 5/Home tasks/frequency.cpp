#include<iostream>
using namespace std;
main()
{
    cout << "Enter the number:"  <<endl;
    int n;
    cin >> n;
    cout << "Enter the digit to check:"  <<endl;
    int d;
    cin >> d;
    int count = 0;

    for (int i=n;i>0;i=i/10){
        if (i%10 == d){
            count = count + 1;
        }
    }
    cout << "Frequence of this digit is:" <<count <<endl; 
}