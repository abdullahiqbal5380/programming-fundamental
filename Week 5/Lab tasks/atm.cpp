#include<iostream>
using namespace std;
main()
{
    int pin;
    int choice;
    float balance , amount , withdraw;
    balance = 2000;
    for (int i=1;i<=3;i=i+1){
        cout << "Enter the pin:"  <<endl;
        cin >> pin;
        if (pin == 1234){
            cout << "Login Successful" <<endl;
            break;
        }
        else{
            cout << "Wrong pin"   <<endl;
        }
    }
    for (int i=1;i<=5;i=i+1){
        cout << "-------ATM MENU-------"    <<endl;
        cout << "1.Check Balance"    <<endl;
        cout << "2.Deposit Money"    <<endl;
        cout << "3.Withdraw Money"    <<endl;
        cout << "4.Exit"            <<endl;

        cout << "Enter Choice:"    <<endl;
        cin >> choice;

        if (choice == 1){
            cout << "Current balance: " <<balance  <<endl;
        }

        else if (choice == 2){
            cout << "Enter amount to deposit:"  <<endl;
            cin >> amount;
            if (amount > 0){
                balance += amount;
            cout << "Money Deposited Successfully"    <<endl;
        }
        else {
            cout << "Invalid Amount"    <<endl;
        }
    }
        else if (choice == 3){
            cout << "Enter amount to withdraw:"    <<endl;
            cin >> withdraw;
            if (withdraw > 0 && withdraw <= balance){
                balance -= withdraw;
                cout << withdraw << " amount withdrawn successfully"  <<endl;
                cout << "Please collect your cash"    <<endl;
            }
            else if (withdraw > balance){
                cout << "Insufficient balance"  <<endl;
            }
        }
        else if (choice == 4){
            cout << "Thank you for using ATM"  <<endl;
            break;
        }
    else{
        cout << "Invalid choice"    <<endl;
    }
}
}