#include<iostream>
using namespace std;
main()
{
    cout << "Enter number of Red roses:"    <<endl;
    int r;
    cin >> r;
    cout << "Enter number of White roses:"   <<endl;
    int w;
    cin >> w;
    cout << "Enter number of Tulips:"      <<endl;
    int t;
    cin >> t;
    float totalPrice;
    totalPrice = r*2.00 + w*4.10 + t*2.50;
    if (totalPrice > 200){
        float discount = totalPrice - (totalPrice*0.2);
        cout << "Original price:" <<totalPrice     <<endl;
        cout << "Price after discount:" <<discount   <<endl;

    }
}