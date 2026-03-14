#include<iostream>
using namespace std;
main()
{
    cout << "Enter your bill:";
    int bill;
    cin >> bill;
    if (bill <= 5000){
        bill = bill - (bill*5/100);
        cout << "Your discounted bill is "<<bill;
    }
    else{
        bill = bill - (bill*10/100);
        cout << "Your discounted bill is "<<bill;

    }
    }
