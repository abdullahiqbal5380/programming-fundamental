#include<iostream>
using namespace std;
main()
{
    int choice;
    string book;
    while (true){

        cout << "----Library System----"  <<endl;
        cout << "1.Add Book"     <<endl;
        cout << "2.View Book"   <<endl;
        cout << "3.Borrow Book"   <<endl;
        cout << "4.Issue Book"    <<endl;
        cout << "5.Exit"        <<endl;

        cout << "Enter your Choice(1-5):"   <<endl;
        cin >> choice;

         if (choice == 1){
            cout << "Enter book name:"   <<endl;
            cin >> book;
            cout << "You added a book: " <<book <<endl;
         }

        else if (choice == 2){
            cout << "Enter book name:"  <<endl;
            cin >> book;
            cout << "You viewed a book: " <<book  <<endl;
         }
        else if (choice == 3){
            cout << "Enter book name:"   <<endl;
            cin >> book;
            cout << "You borrowed a book:" <<book <<endl;
         }
        else if (choice == 4){
            cout << "Enter book name:"   <<endl;
            cin >> book;
            cout << "You issued a book:" <<book <<endl;
         }
         else if (choice == 5){
            cout << "Exiting Library System.Goodbye!" <<endl;
            break;
         }
         else{
            cout << "Invalid Choice"  <<endl;
         }

    }
}