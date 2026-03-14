#include<iostream>
using namespace std;
main()
{
    cout << "Enter number:";
    int n;
    cin >> n;
    int count=0;

    for (int i=n;i>0;i=i/10){
        count = count+1;
    }
    cout << "Total number of digits: " <<count <<endl;
    
}