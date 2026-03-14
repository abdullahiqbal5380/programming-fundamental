#include<iostream>
using namespace std;
main()
{
    cout << "Enter temperature of City 1:"   <<endl;
    int t1;
    cin >> t1;
    cout << "Enter temperature of City 2:"  <<endl;
    int t2;
    cin >> t2;
    int difference;
    difference = t1-t2;
    if (difference > 10){
        cout << "Difference is too big"    <<endl; 
    }
    else{
        cout << "Program Ends"    <<endl;
    }

}