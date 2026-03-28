#include <iostream>
using namespace std;
main()
{
    string name = "admin";
    string userName[3];
    string userpassword , username;
    string password = "1234";
    bool login = false;
    for (int i = 0; i < 3; i = i + 1)
    {
        cout << "Enter the Username:" << endl;
        cin >> username;

        cout << "Enter the Password:" << endl;
        cin >> userpassword;

        userName[i]=username;

        if (username == name && userpassword == password){
            login = true;
            cout << "Login Successful"<<endl;
            break;
        }
        else{
            cout << "Invalid username and password" <<endl;
        }
    }
    if (!login){
        cout << "Too many incorrect attempts.Access Denied."<<endl;
    }

    string studentNames[3];
    int studentAges[3];
    int studentCount = 0;
    string courseName[3];
    int courseCount = 0;
    int choice;

    if (login==true){
        while(true){
            cout << "------University Management System-------"<<endl;
            cout << "1.Add Student" <<endl;
            cout << "2.View Student" <<endl;
            cout << "3.Add Course"  <<endl;
            cout << "4.View Course"  <<endl;
            cout << "5.Exit"    <<endl;

            cout << "Enter your Choice:"<<endl;
            cin >> choice;

            if (choice == 1){
                if (studentCount < 3){
                cout << "Enter Student Name:"<<endl;
                cin >> studentNames[studentCount];

                cout << "Enter Student Age:"<<endl;
                cin >> studentAges[studentCount];
                studentCount ++;
                cout << "Students Added Successfully"<<endl;
            }
            else{
                cout << "Maximum 3 Students Allowed"<<endl;
            }
        }
            else if (choice == 2){
                for (int i=0 ;i<studentCount;i=i+1){
                    cout << "Name:"<<studentNames[i] <<endl;
                    cout << "Age:" <<studentAges[i] <<endl;
                }
            }
            else if (choice == 3){
                if (courseCount < 3){
                    cout << "Enter Course Name:"<<endl;
                    cin >> courseName[courseCount];

                    courseCount ++;
                    cout << "Course Added Successfully"<<endl;
                }
                else{
                    cout << "Maximum 3 courses Allowed"<<endl;
                }
            }
            else if (choice == 4){
                cout << "List of Courses:"<<endl;
                for (int i=0;i<courseCount;i=i+1){
                    cout << "Course Name:"<<courseName[i]<<endl;
                }
            }
            else if (choice == 5){
                cout << "Thank you for using University Management System"<<endl;
                break;
            }
            else{
                cout <<"Invalid Choice"<<endl;
            }
        }
    }
}