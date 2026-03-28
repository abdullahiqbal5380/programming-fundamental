#include <iostream>
using namespace std;
main()
{
    cout << "Enter number of products:" << endl;
    int n;
    cin >> n;

    string productNames[100];
    float price[100];
    int quantity[100];
    float totalPrice;

    for (int i = 0; i < n; i = i + 1)
    {
        cout << "Enter name of product " << (i + 1) << ":";
        cin >> productNames[i];

        cout << "Enter price of " << productNames[i] << ": &";
        cin >> price[i];

        cout << "Enter quantity of " << productNames[i] << ":";
        cin >> quantity[i];
    }
    cout << "-------Product Inventory Report-------" << endl;
    
    for (int i = 0; i < n; i = i + 1)
    {
        totalPrice = price[i] * quantity[i];

        cout << productNames[i] << ":$ "<< price[i] << "," << quantity[i] << " in stock , Total value: $" << totalPrice << endl;
    }
}