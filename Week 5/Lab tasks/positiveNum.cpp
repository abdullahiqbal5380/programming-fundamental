#include<iostream>
using namespace std;
main()
{
    cout << "Please enter a positive number:" <<endl;
    int num;
    cin >> num;

    while(num <= 0){
        cout << "Error: " <<num<< " is not a positive number " <<endl;
        cout << "Enter positive number:" <<endl;
        cin >> num;
    }
    cout << "Program Ends" <<endl;
}