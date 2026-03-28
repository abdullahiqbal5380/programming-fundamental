#include <iostream>
using namespace std;
int main()
{
    int n;
    string book[100];
    string name;
    while (true)
    {
        cout << "LIBRARY MANAGEMENT SYSTEM " << endl;
        cout << "1. ADD BOOKS " << endl;
        cout << "2. VIEW BOOKS " << endl;
        cout << "3. BORROW BOOKS " << endl;
        cout << "4. VIEW BOOKS " << endl;
        cout << "5. EXIT " << endl;

        int choice;
        cout << "Enter the choice(1-5): ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "How many books you want to add: ";
            cin >> n;
            cout << "The name " << n << " books should written below: " << endl;
            for (int i = 0; i < n; i++)
            {
                cin >> book[i];
            }
        }

        else if (choice == 2)
        {
            cout << "These books are available in library " << endl;
            for (int i = 0; i < n; i++)
            {
                cout << book[i] << endl;
            }
        }
        else if (choice == 3)
        {
            bool found = false;
            cout << "Enter the book name you want to borrow: " << endl;
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                if (book[i] == name)
                {
                    cout << "BOOK FOUND " << endl;
                    cout << "YOU BORROWED " << name << "  book from library " << endl;
                    book[i] = {};
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "BOOK IS NOT AVAILABLE IN LIBRARY " << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "These books are available in library " << endl;
            for (int i = 0; i < n; i++)
            {
                cout << book[i] << endl;
            }
        }
        else if (choice == 5)
        {
            cout << "Thanks for visiting our library" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice" << endl;
        }
    }
}