#include<iostream>
using namespace std;
main()
{
    cout << "Enter the length of Fibonacci series:";
    int n;
    cin >> n;
    if (n <= 0){
        cout << "0";
    }
    int n1 = 0;
    int n2 = 1;

    if (n >=1){
        cout << n1 << " , ";
     }
     if (n >=2){
        cout << n2 << " , ";
     }
    int next;

    for (int i=1;i<n-1;i=i+1){
        next = n1+n2;
        cout << next << " , ";
        n1 = n2;
        n2 = next;
    }
}