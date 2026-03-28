#include<iostream>
using namespace std;
main()
{
    cout << "How many numbers you want to enter:" <<endl;
    int n;
    cin >> n;

    int numbers[100];
    for (int i=0; i<n; i=i+1){
        cout << " Enter number " <<i+1<< ":";
        cin >> numbers[i];
    }
    cout << "The numbers you entered are: " <<endl; 
    for (int i=0 ;i<n ;i=i+1){
        cout << numbers[i]  <<endl;
    }
    
}