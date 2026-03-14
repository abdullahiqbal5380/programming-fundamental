#include<iostream>
using namespace std;
main()
{
    cout << "Enter a number:"  <<endl;
    int n;
    cin >> n;
    int count=0;

    if (n == 0){
        cout << "Total number of digits: " <<1 <<endl; 
    }
    
    else{
    for (int i=n;i>0;i=i/10){
        count = count + 1;
    }
    cout << "Total number of digits: " << count <<endl;
}
}