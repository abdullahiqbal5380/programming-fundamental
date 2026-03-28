#include<iostream>
using namespace std;
main()
{
    int currency[4];
    float due;
    float change;
    cout << "Enter quarters:"<<endl;
    cin >> currency[0];
    cout << "Enter dimes:"<<endl;
    cin >> currency[1];
    cout << "Enter nickels:"<<endl;
    cin >> currency[2];
    cout << "Enter pennies:"<<endl;
    cin >> currency[3];

    cout << "Enter the total amount due: $";
    cin >> due;

    change = currency[0]*0.25 + currency[1]*0.10 + currency[2]*0.05 + currency[3]*0.01;
    cout << "Can yoy pay the due amount?"<<endl;
    if (change >= due){
        cout << "Yes"<<endl;
    }
    else{
        cout << "No" <<endl;
    }
}