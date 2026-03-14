#include<iostream>
using namespace std;
main()
{
    cout << "Enter Lilly's age:"  <<endl;
    int age;
    cin >> age;
    cout << "Enter the unit price of each toy:"  <<endl;
    int toyPrice;
    cin >> toyPrice;
    cout << "Enter the price of Washing machine:"  <<endl;
    float machinePrice;
    cin >> machinePrice;

    int toys=0;
    float moneySaved=0;
    float giftMoney = 10.0;

    for (int i=1;i<=age;i=i+1){
        if (i%2 != 0){
            toys = toys+1;
        }
    else{
        moneySaved += giftMoney;
        moneySaved -= 1.0;
        giftMoney += 10.0;
    }
}
    moneySaved += toys*toyPrice;

    if (moneySaved >= machinePrice){
        cout << "Yes!" <<endl;
        cout << (moneySaved - machinePrice) <<endl;
       
    }
    else{
        cout << "No!"  <<endl;
        cout << (machinePrice - moneySaved)  <<endl;
        
    }
}

