#include<iostream>
using namespace std;
main()
{
    cout << "Enter the cost of the dress:";
    int cost;
    cin >> cost;
    if (cost > 1500){
        cout << "Buy the dress";
    }
    if (cost < 1500){
        cout << "Do not buy the dress";
    }
}   
