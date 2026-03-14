#include<iostream>
using namespace std;
main()
{
    cout << "Enter the country's name:"   <<endl;
    string name;
    cin >> name;
    cout << "Enter ticket price in dollars:"    <<endl;
    int price;
    cin >> price;
    float discountedPrice;

    if (name == "ireland"){
     discountedPrice = price - (price*0.1);
}
    else{
         discountedPrice = price - (price*0.05);
    }
    cout << "Discounted price :" << discountedPrice  <<endl;
}
     






    




