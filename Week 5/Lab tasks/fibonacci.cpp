#include<iostream>
using namespace std;
main()
{
    cout << "How many numbers of Fibonacci series you want to print:";
    int n;
    cin >> n;

    int n1=0;
    int n2=1;
    cout <<n1<< "," <<n2<< ",";
    int next;

    for (int i=1;i<n-1;i=i+1){
        next = n1+n2;
        cout << next << ",";
        n1=n2;
        n2=next;
    }

}