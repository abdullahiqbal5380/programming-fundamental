#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

// Global variables
int totalRooms = 100;
int roomCount = 0;

int roomNumbers[100];
string guestName[100];
string roomTypes[100];
int nights[100];
float roomRates[100];
float totalBill[100];

// Function prototypes
void loadFromFile();
void saveToFile();
void initializeSampleData();
void calculateTotalBills();
void showMainMenu();
bool adminLogin();
void showAdminMenu();
void showAllGuests();
void searchGuestByName();
void updateGuestRecord();
void checkoutGuest();
void viewRoomAvailability();
void generateRevenueReport();
void registerGuest();

int main()
{
    loadFromFile();

    if (roomCount == 0)
    {
        initializeSampleData();
        calculateTotalBills();
        saveToFile();
    }

    while (true)
    {
        showMainMenu();
        string userOption;
        cin >> userOption;

        if (userOption == "1")
        {
            if (adminLogin())
                showAdminMenu();
        }
        else if (userOption == "2")
        {
            registerGuest();
        }
        else if (userOption == "3")
        {
            saveToFile();
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
    return 0;
}

// ====================== FILE HANDLING ======================

void loadFromFile()
{
    fstream file("hotel_data.txt", ios::in);
    if (!file.is_open())
    {
        roomCount = 0;
        return;
    }

    file >> roomCount;

    for (int i = 0; i < roomCount; i++)
    {
        file >> roomNumbers[i] >> guestName[i] >> roomTypes[i] >> nights[i] >> roomRates[i] >> totalBill[i];
    }
    file.close();
    cout << "Data loaded successfully! (" << roomCount << " guests)" << endl;
    cout << "Press any key to continue.." << endl;
    getch();
}

void saveToFile()
{
    fstream file("hotel_data.txt", ios::out); // ios::out mode
    if (!file.is_open())
    {
        cout << "Error: Could not save data!" << endl;
        return;
    }

    // Count actual non-empty records
    int actualCount = 0;
    for (int i = 0; i < roomCount; i++)
    {
        if (guestName[i] != "")
            actualCount++;
    }

    file << actualCount << endl;

    for (int i = 0; i < roomCount; i++)
    {
        if (guestName[i] != "")
        {
            file << roomNumbers[i] << " "
                 << guestName[i] << " "
                 << roomTypes[i] << " "
                 << nights[i] << " "
                 << roomRates[i] << " "
                 << totalBill[i] << endl;
        }
    }
    file.close();
}

void initializeSampleData()
{
    for (int i = 0; i < totalRooms; i++)
    {
        roomNumbers[i] = 101 + i;
    }

    // Initialize sample data
    guestName[0] = "Ali";
    guestName[1] = "Zain";
    guestName[2] = "Umer";
    guestName[3] = "Ahmed";
    guestName[4] = "Haad";

    roomTypes[0] = "Double";
    roomTypes[1] = "Suite";
    roomTypes[2] = "Single";
    roomTypes[3] = "Single";
    roomTypes[4] = "Suite";

    nights[0] = 3;
    nights[1] = 2;
    nights[2] = 1;
    nights[3] = 4;
    nights[4] = 2;

    roomRates[0] = 8000;
    roomRates[1] = 15000;
    roomRates[2] = 5000;
    roomRates[3] = 5000;
    roomRates[4] = 15000;

    roomCount = 5;
}

void calculateTotalBills()
{
    for (int i = 0; i < roomCount; i++)
    {
        totalBill[i] = roomRates[i] * nights[i];
    }
}

// ====================== MENU FUNCTIONS ======================

void showMainMenu()
{
    system("cls");
    cout << "=====================================" << endl;
    cout << "     HOTEL MANAGEMENT SYSTEM         " << endl;
    cout << "=====================================" << endl;
    cout << "1.Admin" << endl;
    cout << "2.Guest" << endl;
    cout << "3.Exit" << endl;
    cout << "Choose Option: ";
}

bool adminLogin()
{
    for (int attempt = 0; attempt < 3; attempt++)
    {
        system("cls");
        cout << "Enter username: ";
        string userName;
        cin >> userName;
        cout << "Enter Password: ";
        string password;
        cin >> password;

        if (userName == "admin" && password == "admin123")
        {
            cout << "Login Successful!" << endl;
            cout << "Press any key to continue.." << endl;
            getch();
            return true;
        }
        else
        {
            cout << "Invalid username or password" << endl;
            if (attempt < 2)
                getch();
        }
    }
    return false;
}

void showAdminMenu()
{
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

        cout << "Choose option: ";
        string adminOption;
        cin >> adminOption;

        if (adminOption == "1")
        {
            showAllGuests();
        }
        else if (adminOption == "2")
        {
            searchGuestByName();
        }
        else if (adminOption == "3")
        {
            updateGuestRecord();
            saveToFile();
        }
        else if (adminOption == "4")
        {
            checkoutGuest();
            saveToFile();
        }
        else if (adminOption == "5")
        {
            viewRoomAvailability();
        }
        else if (adminOption == "6")
        {
            generateRevenueReport();
        }
        else if (adminOption == "7")
        {
            break;
        }
        else
            cout << "Invalid Option Selected" << endl;

        cout << "\nPress any key to continue..";
        getch();
    }
}

void showAllGuests()
{
    system("cls");
    cout << "---ALL GUESTS RECORD---" << endl;
    cout << "Room\tName\t\t\tType\t\t\tNights\t\t\tTotal Bill" << endl;
    for (int i = 0; i < roomCount; i++)
    {
        if (guestName[i] != "")
        {
            cout << roomNumbers[i] << "\t" << guestName[i] << "\t\t\t"
                 << roomTypes[i] << "\t\t\t" << nights[i] << "\t\t\t"
                 << "Rs." << totalBill[i] << endl;
        }
    }
}

void searchGuestByName()
{
    system("cls");
    cout << "Enter guest name to search: ";
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
        cout << "Room Number: " << roomNumbers[foundindex] << endl;
        cout << "Guest Name: " << guestName[foundindex] << endl;
        cout << "Room Type: " << roomTypes[foundindex] << endl;
        cout << "Nights: " << nights[foundindex] << endl;
        cout << "Room Rate: Rs." << roomRates[foundindex] << " per night" << endl;
        cout << "Total Bill: Rs." << totalBill[foundindex] << endl;
    }
}

void updateGuestRecord()
{
    system("cls");
    cout << "Enter guest name to update: ";
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
        cout << "Room Number: " << roomNumbers[foundindex] << endl;
        cout << "Guest Name: " << guestName[foundindex] << endl;
        cout << "Room Type: " << roomTypes[foundindex] << endl;
        cout << "Nights: " << nights[foundindex] << endl;
        cout << "Total Bill: Rs." << totalBill[foundindex] << endl;

        cout << "\n----New Record-----" << endl;
        cout << "Enter guest name: ";
        string newName;
        getline(cin, newName);

        cout << "Enter room type: ";
        string newType;
        cin >> newType;

        cout << "Enter number of nights: ";
        int newNights;
        cin >> newNights;

        float newRate = 0;
        if (newType == "Single")
            newRate = 5000;
        else if (newType == "Double")
            newRate = 8000;
        else if (newType == "Suite")
            newRate = 15000;

        guestName[foundindex] = newName;
        roomTypes[foundindex] = newType;
        nights[foundindex] = newNights;
        roomRates[foundindex] = newRate;
        totalBill[foundindex] = newRate * newNights;

        cout << "Record Updated Successfully!" << endl;
    }
    else
    {
        cout << "Guest not found" << endl;
    }
}

void checkoutGuest()
{
    system("cls");
    cout << "Enter guest name to check-out: ";
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
        cout << "----Check-out Details----" << endl;
        cout << "Room Number: " << roomNumbers[foundindex] << endl;
        cout << "Guest Name: " << guestName[foundindex] << endl;
        cout << "Room Type: " << roomTypes[foundindex] << endl;
        cout << "Total Nights: " << nights[foundindex] << endl;
        cout << "Total Bill: Rs." << totalBill[foundindex] << endl;

        guestName[foundindex] = "";
        roomTypes[foundindex] = "";
        nights[foundindex] = 0;
        roomRates[foundindex] = 0;
        totalBill[foundindex] = 0;

        cout << "\nGuest checked-out successfully!" << endl;
        roomCount--;
    }
    else
    {
        cout << "Guest not found" << endl;
    }
}

void viewRoomAvailability()
{
    system("cls");
    cout << "-----ROOM AVAILABILITY-----" << endl;
    cout << "Room Number\tStatus\t\tGuest Name" << endl;

    for (int i = 0; i < roomCount; i++)
    {
        if (guestName[i] != "")
        {
            cout << roomNumbers[i] << "\t\tOccupied\t" << guestName[i] << endl;
        }
    }

    bool availableFound = false;
    for (int room = 101; room <= 200; room++)
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
        cout << "No available rooms at the moment!" << endl;
}

void generateRevenueReport()
{
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
    cout << "Total Occupied Rooms: " << occupiedRooms << endl;
    cout << "Total Guest Nights : " << totalNights << endl;
    cout << "Total Revenue      : Rs." << totalRevenue << endl;
}

void registerGuest()
{
    system("cls");
    cout << "======GUEST REGISTRATION========" << endl;

    if (roomCount >= totalRooms)
    {
        cout << "Sorry! Hotel is fully booked!" << endl;
    }
    else
    {
        cout << "Enter your name: ";
        string name;
        cin.ignore();
        getline(cin, name);

        cout << "Select room type (Single/Double/Suite): ";
        string type;
        cin >> type;

        int newRoom = 101;
        for (int i = 0; i < roomCount; i++)
        {
            if (roomNumbers[i] == newRoom)
            {
                newRoom++;
                i = -1;
            }
        }

        cout << "Enter number of nights: ";
        int nightStay;
        cin >> nightStay;

        float rate = 0;
        if (type == "Single")
            rate = 5000;
        else if (type == "Double")
            rate = 8000;
        else if (type == "Suite")
            rate = 15000;

        float bill = rate * nightStay;

        roomNumbers[roomCount] = newRoom;
        guestName[roomCount] = name;
        roomTypes[roomCount] = type;
        nights[roomCount] = nightStay;
        roomRates[roomCount] = rate;
        totalBill[roomCount] = bill;
        roomCount++;

        cout << "\n======REGISTRATION SUCCESSFUL======" << endl;
        cout << "Guest Name : " << name << endl;
        cout << "Room Number: " << newRoom << endl;
        cout << "Room Type  : " << type << endl;
        cout << "Nights     : " << nightStay << endl;
        cout << "Total Bill : Rs." << bill << endl;
    }
    saveToFile();
    cout << "\nPress any key to continue...";
    getch();
}