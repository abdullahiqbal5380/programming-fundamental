#include <iostream>
using namespace std;
main()
{
    cout << "Enter  number of flights:" << endl;
    int num;
    cin >> num;

    int flightNum[100];
    string destiny[100];
    int seats[100];

    for (int i = 0; i < num; i = i + 1)
    {
        cout << "Enter flight number for flight " << (i + 1) << ":";
        cin >> flightNum[i];

        cout << "Enter destination for flight " << flightNum[i] << ":";
        cin >> destiny[i];

        cout << "Enter seats available for flight " << flightNum[i] << ":";
        cin >> seats[i];
    }
    cout << "Flight Information:" << endl;
    cout << "-------------------" << endl;

    for (int i = 0; i < num; i = i + 1)
    {
        cout << "Flight " << flightNum[i] << " to " << destiny[i] << " has " <<seats[i] << " seats available." << endl;
    }
    cout << "Flights with less than 5 seats available:" << endl;
    cout << "-----------------------------------------" << endl;
    for (int i = 0; i < num; i = i + 1)
    {
        if (seats[i] < 5)
        {
            cout << " Flight " << flightNum[i] << " to " << destiny[i] << " has only " << seats[i] << " seats left!" << endl;
        }
        else
        {
            cout << "No flights with less than 5 seats available." << endl;
        }
    }
}
