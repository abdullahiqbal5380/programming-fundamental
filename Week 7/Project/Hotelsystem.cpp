#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int totalRooms = 100;
    int roomCount = 5; // 5 rooms occupied currently

    // Data Structure
    int roomNumbers[totalRooms] = {101, 102, 103, 104, 105};
    string guestName[totalRooms] = {"Ali", "Zain", "Umer", "Ahmed", "Haad"};
    string roomTypes[totalRooms] = {"Double", "Suite", "Single", "Single", "Suite"};
    int nights[totalRooms] = {3, 2, 1, 4, 2};
    float roomRates[totalRooms] = {8000, 15000, 5000, 5000, 15000};
    float totalBill[totalRooms];

    for (int i = 0; i < roomCount; i++)
    {
        totalBill[i] = roomRates[i] * nights[i];
    }
    while (true)
    {
        // Main Header
        system("cls");
        cout << "=====================================" << endl;
        cout << "     HOTEL MANAGEMENT SYSTEM         " << endl;
        cout << "=====================================" << endl;
        cout << "1.Admin" << endl;
        cout << "2.Guest" << endl;
        cout << "3.Exit" << endl;

        cout << "Choose Option:";
        string userOption;
        cin >> userOption;

        if (userOption == "1")
        {
            for (int attempt = 0; attempt < 3; attempt++)
            {   //Log-in
                system("cls");
                cout << "Enter username" << endl;
                string userName;
                cin >> userName;
                cout << "Enter Password" << endl;
                string password;
                cin >> password;

                if (userName == "admin" && password == "admin123")
                {
                    cout << "Login Successful" << endl;
                    cout << "Press any key to continue..";
                    getch();

                    while (true)
                    {
                        system("cls");
                        cout << "=======ADMIN MENU========" << endl;
                        cout << "1.Show all guests" << endl;
                        cout << "2.Search guest by name" << endl;
                        cout << "3.Update guest record" << endl;
                        cout << "4.Check-out guest" << endl;
                        cout << "5.View room availability" << endl;
                        cout << "6.Generate revenue report" << endl;
                        cout << "7.Logout" << endl;

                        cout << "Choose option:";
                        string adminOption;
                        cin >> adminOption;

                        if (adminOption == "1")
                        {
                            // Show All Guests
                            system("cls");
                            cout << "---ALL GUESTS RECORD---" << endl;
                            cout << "Room\tName\t\tType\tNights\tTotal Bill" << endl;
                            for (int i = 0; i < roomCount; i++)
                            {
                                if (guestName[i] != "")
                                {
                                    cout << roomNumbers[i] << "\t" << guestName[i] << "\t\t" << roomTypes[i] << "\t" << nights[i] << "\t"
                                         << "Rs." << totalBill[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == "2")
                        {
                            // Search Guest By Name
                            system("cls");
                            cout << "Enter guest name to search:";
                            string searchName;
                            cin.ignore();
                            getline(cin, searchName);

                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < roomCount; i++)
                            {
                                if (guestName[i] == searchName)
                                {
                                    foundindex = i;
                                    found = true;
                                    break;
                                }
                            }
                            if (!found)
                            {
                                cout << "Guest " << searchName << " not found" << endl;
                            }
                            else
                            {
                                cout << "=======Guest Details========" << endl;
                                cout << "Room Number:" << roomNumbers[foundindex] << endl;
                                cout << "Guest Name:" << guestName[foundindex] << endl;
                                cout << "Room type:" << roomTypes[foundindex] << endl;
                                cout << "Nights:" << nights[foundindex] << endl;
                                cout << "Room Rate Rs." << roomRates[foundindex] << " per night " << endl;
                                cout << "Total Bill: Rs." << totalBill[foundindex] << endl;
                            }
                        }
                        else if (adminOption == "3")
                        {
                            // Update Guest Record
                            system("cls");
                            {
                                cout << "Enter guest name to update:" << endl;
                                string updateName;
                                cin.ignore();
                                getline(cin, updateName);

                                bool found = false;
                                int foundindex = -1;
                                for (int i = 0; i < roomCount; i++)
                                {
                                    if (guestName[i] == updateName)
                                    {
                                        foundindex = i;
                                        found = true;
                                        break;
                                    }
                                }
                                if (found)
                                {
                                    cout << "----Old Record----" << endl;
                                    cout << "Room Number:" << roomNumbers[foundindex] << endl;
                                    cout << "Guest Name:" << guestName[foundindex] << endl;
                                    cout << "Room type:" << roomTypes[foundindex] << endl;
                                    cout << "Nights:" << nights[foundindex] << endl;
                                    cout << "Total Bill: Rs." << totalBill[foundindex] << endl;

                                    cout << "----New Record-----" << endl;
                                    cout << "Enter guest name:" << endl;
                                    string newName;
                                    getline(cin, newName);

                                    cout << "Enter room type:" << endl;
                                    string newType;
                                    cin >> newType;

                                    cout << "Enter number of nights:" << endl;
                                    int newNights;
                                    cin >> newNights;

                                    float newRate;
                                    if (newType == "Single")
                                    {
                                        newRate = 5000;
                                    }
                                    else if (newType == "Double")
                                    {
                                        newRate = 8000;
                                    }
                                    else if (newType == "Suite")
                                    {
                                        newRate = 15000;
                                    }
                                    guestName[foundindex] = newName;
                                    roomTypes[foundindex] = newType;
                                    nights[foundindex] = newNights;
                                    roomRates[foundindex] = newRate;
                                    totalBill[foundindex] = newRate * newNights;

                                    cout << "Record Updated Successfully" << endl;
                                }
                                else
                                {
                                    cout << "Guest not found" << endl;
                                }
                            }
                        }
                        else if (adminOption == "4")
                        {
                            // Check-out Guest
                            system("cls");
                            cout << "Enter guest name to check-out:" << endl;
                            string deleteName;
                            cin.ignore();
                            getline(cin, deleteName);

                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < roomCount; i++)
                            {
                                if (guestName[i] == deleteName)
                                {
                                    foundindex = i;
                                    found = true;
                                    break;
                                }
                            }
                            if (found)
                            {
                                cout << "----Check-out----" << endl;
                                cout << "Room Number:" << roomNumbers[foundindex] << endl;
                                cout << "Guest Name:" << guestName[foundindex] << endl;
                                cout << "Room typoe:" << roomTypes[foundindex] << endl;
                                cout << "Total Nights:" << nights[foundindex] << endl;
                                cout << "Total Bill: Rs." << totalBill[foundindex] << endl;

                                // Delete Record
                                guestName[foundindex] = "";
                                roomTypes[foundindex] = "";
                                nights[foundindex] = 0;
                                roomRates[foundindex] = 0;
                                totalBill[foundindex] = 0;

                                cout << "Guest checked-out successfully" << endl;
                            }
                            else
                            {
                                cout << "Guest not found" << endl;
                            }
                        }
                        else if (adminOption == "5")
                        {
                            // View Room Availability
                            system("cls");
                            cout << "-----ROOM AVAILABILITY-----" << endl;
                            cout << "Room Number\tStatus\t\tGuest Name" << endl;

                            // Show Occupied Rooms
                            for (int i = 0; i < roomCount; i++)
                            {
                                if (guestName[i] != "")
                                {
                                    cout << roomNumbers[i] << "\t\tOccupied\t" << guestName[i] << endl;
                                }
                            }
                            // Show Available Rooms
                            bool availableFound = false;
                            for (int room = 101; room <= 105; room++)
                            {
                                bool isOccupied = false;
                                for (int i = 0; i < roomCount; i++)
                                {
                                    if (roomNumbers[i] == room && guestName[i] != "")
                                    {
                                        isOccupied = true;
                                        break;
                                    }
                                }
                                if (!isOccupied)
                                {
                                    cout << room << "\t\tAvailable\t " << endl;
                                    availableFound = true;
                                }
                            }
                            if (!availableFound)
                            {
                                cout << "No available rooms at the moment " << endl;
                            }
                        }
                        else if (adminOption == "6")
                        {
                            // Generate Revenue Report
                            system("cls");
                            float totalRevenue = 0;
                            int totalNights = 0;
                            int occupiedRooms = 0;

                            for (int i = 0; i < roomCount; i++)
                            {
                                if (guestName[i] != "")
                                {
                                    totalRevenue += totalBill[i];
                                    totalNights += nights[i];
                                    occupiedRooms++;
                                }
                            }
                            cout << "------REVENUE REPORT------" << endl;
                            cout << "Total Occupied Rooms:" << occupiedRooms << endl;
                            cout << "Total Guest nights:" << totalNights << endl;
                            cout << "Total Revenue: Rs." << totalRevenue << endl;
                        }
                        else if (adminOption == "7")
                        {
                            // Exit admin menu loop
                            break;
                        }
                        else
                        {
                            cout << "Invalid Option Selected" << endl;
                        }
                        cout << "Press any key to continue..";
                        getch();
                    }
                    break;    //Exit login loop
                }
                else
                {
                    cout << "Invalid username or password" << endl;
                    if (attempt < 2)
                    {
                        cout << "Press any key to try again..";
                        getch();
                    }
                }
            }
        }
        else if (userOption == "2")
        {
            // Guest Registration
            system("cls");
            cout << "======GUEST REGISTRATION========" << endl;

            if (roomCount >= totalRooms)
            {   // Check if hotel has capacity
                cout << "Sorry! Hotel is fully booked!" << endl;
            }
            else
            {
                cout << "Enter your name" << endl;
                string name;
                cin.ignore();
                getline(cin, name);

                cout << "Select room type (Single/Double/Suite):" << endl;
                string type;
                cin >> type;

                int newRoom = 101;
                for (int i = 0; i < roomCount; i++)
                {
                    if (roomNumbers[i] == newRoom)
                    {
                        newRoom++;
                        i = -1; // Reset search
                    }
                }
                cout << "Enter number of nights:" << endl;
                int nightStay;
                cin >> nightStay;

                float rate;
                if (type == "Single")
                {
                    rate = 5000;
                }
                else if (type == "Double")
                {
                    rate = 8000;
                }
                else if (type == "Suite")
                {
                    rate = 15000;
                }
                float bill = rate * nightStay;

                // Add New Guest
                roomNumbers[roomCount] = newRoom;
                guestName[roomCount] = name;
                roomTypes[roomCount] = type;
                nights[roomCount] = nightStay;
                roomRates[roomCount] = rate;
                totalBill[roomCount] = bill;
                roomCount++;

                cout << "======REGISTRATION======" << endl;
                cout << "Guest Name:" << name << endl;
                cout << "Room Number:" << newRoom << endl;
                cout << "Room Type:" << type << endl;
                cout << "Nights:" << nightStay << endl;
                cout << "Total Bill: Rs." << bill << endl;

                cout << "Registration successsful! Welcome!" << endl;
            }
            cout << "Press any key to continue...";
            getch();
        }
        else if (userOption == "3")
        {
            cout << "Thank you for using Hotel Management System" << endl;
            break;
        }
        else
        {
            cout << "Invalid Option selected" << endl;
            cout << "Press any key to continue..";
            getch();
        }
    }
}
