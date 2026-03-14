#include<iostream>
using namespace std;
main()
{
    cout << "Enter a number:" ;
    int table;
    cin >> table;
    int multiple;

    for (int i=1;i<=10;i=i+1){
        multiple = table*i;
        cout <<table<< " * " <<i<< " = " <<multiple <<endl;
    }
}