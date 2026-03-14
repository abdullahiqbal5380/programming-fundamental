#include<iostream>
using namespace std;
main()
{
    int choice;
    while (true){

        cout << "=======MENU======="  <<endl;
        cout << "1.Say Hello"     <<endl;
        cout << "2.Say Goodbye"    <<endl;
        cout << "3.Exit"        <<endl;

        cout << "Enter your Choice : "   <<endl;
        cin >> choice;

        if (choice == 1){
            cout << "Hello! Welcome to the Program " <<endl;
        }
        else if (choice == 2){
            cout << "Goodbye! Have a nice day"    <<endl;
        }
        else if (choice == 3){
            cout << "Program Ends"     <<endl;
            break;
        }
        else {
            cout << "Invalid Choice"   <<endl;
        }
    }
}