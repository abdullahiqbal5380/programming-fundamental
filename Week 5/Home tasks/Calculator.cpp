#include<iostream>
using namespace std;
main()
{
    int choice;
    int n1,n2;
    int result;
    while (true){

        cout << "--------Simple Calculator--------"  <<endl;
        cout << "1.Addition"     <<endl;
        cout << "2.Subtraction"  <<endl;
        cout << "3.Multiplication"  <<endl;
        cout << "4.Division"     <<endl;
        cout << "5.Clear Screen"  <<endl;
        cout << "6.Exit"         <<endl;

        cout << "Enter your Choice (1-6):" <<endl;
        cin >> choice;

        if (choice == 1){
            cout << "Enter first number: "  ;
            cin >> n1;
            cout << "Enter second number: " ;
            cin >> n2;
            result = n1+n2;
            cout << "Result: " <<result   <<endl;
        }
        if (choice == 2){
            cout << "Enter first number: "  ;
            cin >> n1;
            cout << "Enter second number: " ;
            cin >> n2;
            result = n1-n2;
            cout << "Result: " <<result   <<endl;
        }
        if (choice == 3){
            cout << "Enter first number: "  ;
            cin >> n1;
            cout << "Enter second number: " ;
            cin >> n2;
            result = n1*n2;
            cout << "Result: " <<result   <<endl;
        }
        if (choice == 4){
            cout << "Enter first number: "  ;
            cin >> n1;
            cout << "Enter second number: " ;
            cin >> n2;
            result = n1/n2;
            cout << "Result: " <<result   <<endl;
        }
        if (choice == 5){
            cout << "Screen Cleared."    <<endl;
        }
        if (choice == 6){
            cout << "Exiting Calculator.Goodbye! " <<endl;
            break;
        }

    }
}