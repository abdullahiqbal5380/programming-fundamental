#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int totalStudents = 1000;
    int index = 5;

    // data structures
    string nameArray[totalStudents] = {"ali", "ammar", "sara", "ahmed", "zain"};
    int ageArray[totalStudents] = {19, 23, 17, 21, 19};
    float matricArray[totalStudents] = {456, 867, 940, 879, 835};
    float interArray[totalStudents] = {890, 789, 820, 789, 990};
    float ecatArray[totalStudents] = {345, 389, 367, 360, 280};
    string pref1Array[totalStudents] = {"CE", "CS", "IT", "CE", "EE"};
    string pref2Array[totalStudents] = {"CS", "CE", "EE", "CS", "CE"};
    string pref3Array[totalStudents] = {"EE", "CS", "IT", "CS", "EE"};
    float aggArray[totalStudents];

    // CRUD Create,Read,Update,Delete

    while (true)
    {
        // MAIN HEADER OF UMS
        system("cls");
        cout << "------------------------------------------------" << endl;
        cout << "-----University Admission Management System-----" << endl;
        cout << "------------------------------------------------" << endl;

        cout << "User Menu" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Student" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose Option:" << endl;
        string userOption;
        cin >> userOption;

        cout << "You choose " << userOption << endl;
        if (userOption == "1")
        {
            // Write here the admin code
            for (int i = 0; i < 3; i = i + 1)
            {
                system("cls");
                cout << "Admin Menu: Login attempt" << i + 1 << endl;
                cout << "Enter username:";
                string username;
                cin >> username;
                cout << "Enter password:";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << " Login Successfully";
                    while (true)
                    {
                        system("cls");
                        cout << "1. Show all students" << endl;
                        cout << "2. Search student" << endl;
                        cout << "3. Update student record" << endl;
                        cout << "4. Generate Merit list" << endl;
                        cout << "5. Delete record by name" << endl;
                        cout << "6. Logout" << endl;
                        cout << "Choose the option:" << endl;
                        string adminOption;
                        cin >> adminOption;
                        if (adminOption == "1")
                        {
                            // show students record
                            cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == "2")
                        {
                            // search student by name
                            cout << "Enter the name you want to search:" << endl;
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against name" << name << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }
                        else if (adminOption == "3")
                        {
                            // update student record
                            cout << "Enter the name you want to update record of";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "--------Old Record----------" << endl;
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;

                                cout << "Enter new record for update" << endl;
                                cout << "Enter your name:" << endl;
                                string name;
                                cin >> name;
                                cout << "Enter age:" << endl;
                                int age;
                                cin >> age;
                                cout << "Enter matric marks:" << endl;
                                float matric;
                                cin >> matric;
                                cout << "Enter FSC marks:" << endl;
                                float fsc;
                                cin >> fsc;
                                cout << "Enter ECAT marks:" << endl;
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS , CE , EE as your preferences:" << endl;
                                cout << "Enter your 1st Pref:";
                                string pref1;
                                cin >> pref1;
                                cout << "Enter your 2nd Pref:";
                                string pref2;
                                cin >> pref2;
                                cout << "Enter your 3rd Pref:";
                                string pref3;
                                cin >> pref3;

                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = fsc;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "Record not found" << endl;
                            }
                        }
                        else if (adminOption == "4")
                        {
                            // generate merit list
                            for (int i = 0; i < index; i = i + 1)
                            {
                                float aggri = matricArray[i] / 1100 * 100 * 0.30 + interArray[i] / 1200 * 100 * 0.4 + ecatArray[i] / 400 * 100 * 0.30;
                                aggArray[i] = aggri;
                            }
                            // sorting the data on the basis of aggregate
                            for (int i = 0; i < index; i = i + 1)
                            {
                                for (int j = i + 1; j < index; j = j + 1)
                                {
                                    if (aggArray[i] < aggArray[j])
                                    {

                                        // swap names
                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;

                                        // swap matric
                                        float tempmatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempmatric;

                                        // swap inter
                                        float tempinter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempinter;

                                        // swap ecat
                                        float tempecat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempecat;

                                        // swap prefrences
                                        string temppref1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = temppref1;

                                        string temppref2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = temppref2;

                                        string temppref3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = temppref3;

                                        float tempagrri = aggArray[i];
                                        aggArray[i] = aggArray[j];
                                        aggArray[j] = tempagrri;
                                    }
                                }
                            }

                            // code to display all data with aggregate
                            cout << "Name\tAge\tAggregate" << endl;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggArray[i] << endl;
                                }
                            }
                            // admit atudents into disciplines
                        }
                        else if (adminOption == "5")
                        {
                            // delete student record
                            cout << "Enter the name you want to delete:" << endl;
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                nameArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout << "Record of" << name << "Deleted" << endl;
                            }
                            else
                            {
                                cout << "Record not found" << endl;
                            }
                        }
                        else if (adminOption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected";
                        }
                        cout << "Press any key to continue";
                        getch();
                    }
                    cout << "Press any key to continue";
                    getch();
                    break;
                }
                else
                {
                    cout << "Invalid username or password" << endl;
                }
                cout << "Press any key to continue..";
                getch();
            }
        }
        else if (userOption == "2")
        {
            // Write here the student code
            system("cls");
            cout << "Welcome to UMS Student Menu" << endl;
            cout << "Enter your name:" << endl;
            string name;
            cin >> name;
            cout << "Enter age:" << endl;
            int age;
            cin >> age;
            cout << "Enter matric marks:" << endl;
            float matric;
            cin >> matric;
            cout << "Enter FSC marks:" << endl;
            float fsc;
            cin >> fsc;
            cout << "Enter ECAT marks:" << endl;
            float ecat;
            cin >> ecat;
            cout << "Enter CS , CE , EE as your preferences:" << endl;
            cout << "Enter your 1st Pref:";
            string pref1;
            cin >> pref1;
            cout << "Enter your 2nd Pref:";
            string pref2;
            cin >> pref2;
            cout << "Enter your 3rd Pref:";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = fsc;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index = index + 1;

            cout << "Your data has been saved";

            getch();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered the wrong option" << endl;
        }
    }
    cout << "Thanks for using this software";
}