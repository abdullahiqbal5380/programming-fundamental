#include<iostream>
using namespace std;
main()
{
    string user_name,password;
    string studentName;
    int age;
    string courseName;
    int choice;

    for (int i=1;i<=3;i=i+1){
        cout << "Enter Username:" <<endl;
        cin >> user_name;

        cout << "Enter the Password:"  <<endl;
        cin >> password;
        if (user_name == "admin" && password == "1234")
        {
            cout << "Login Successful" <<endl;
            break;
        }
        else{
            cout << "Wrong Login"   <<endl;
        }
    }
    for (int i=1;i<=5;i=i+1)
    {
        cout << "------University Management System------"  <<endl;
        cout << "1. Add Student"  <<endl;
        cout << "2. View Student"  <<endl;
        cout << "3. Add Course"    <<endl;
        cout << "4.  Exit  "       <<endl;
        cout << "Enter Choice:"    <<endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Student Name:"   <<endl;
            cin >> studentName;
            cout << "Enter Student Age:"    <<endl;
            cin >> age;

            cout << "Student Added Successfully"   <<endl;
        }
        else if (choice == 2)
        {
            if (studentName !=""){
            cout << "Student Name:" <<studentName  <<endl;
            cout << "Student Age:"  <<age <<endl;
        }
        else{
            cout << "No Student Record Found"   <<endl;
          }
        }
        else if (choice == 3)
        {
            cout << "Enter Course Name:"   <<endl;
            cin >> courseName;
            cout << "Course Added: " <<courseName <<endl;      
          }
        else if (choice == 4)
        {
            cout << "Program Exit"  <<endl;
            break;
        }
        else{
            cout << "Invalid Choice"  <<endl;
        }

    }
}


