#include <iostream>
using namespace std;
main()
{
    int correctPin = 1234;
    int pin[3];
    bool login = false;
    int choice;
    int balance = 1000;
    int amount;

    for (int i = 0; i < 3; i = i + 1)
    {
       cout << "Enter the Pin:" << endl;
       cin >> pin[i];

        if (pin[i] == correctPin)
        {
            login = true;
            cout << "Login Successful" << endl;
            break;
        }
        else
        {
            cout << "Invalid Pin" << endl;
        }
    }
        if (login == true)
        {
        while (true){
            
       cout << "--------ATM MENU---------" << endl;
       cout << "1.Check Balance" << endl;
       cout << "2.Deposit Money" << endl;
       cout << "3.Withdraw Money" << endl;
       cout << "4.Exit" << endl;

        cout << "Enter your choice:" << endl;
         cin >> choice;

         if (choice == 1)
            {
            cout << "Current Balance is" << balance << endl;
             }
             else if (choice == 2)
                {
                    cout << "Enter the amount you want to deposit:" << endl;
                    cin >> amount;
                    balance = balance + amount;
                    cout << "Updated balance:" << balance << endl;
                }
                else if (choice == 3)
                {
                    cout << "Enter the amount you want to withdraw:" << endl;
                    cin >> amount;

                    if (amount <= balance && amount > 0)
                    {
                        balance = balance - amount;
                        cout << "Remaining balance:" << balance << endl;
                    }
                    else
                    {
                        cout << "Insufficient balance" << endl;
                    }
                }
                else if (choice == 4)
                {
                    cout << "Thank you for using ATM" << endl;
                    break;
                }
                else
                {
                    cout << "Invalid Choice" << endl;
                }
            }
            
        }
    }
