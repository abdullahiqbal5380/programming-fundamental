#include<iostream>
using namespace std;
main()
{
    cout << "Enter number of holidays:"    <<endl;
    int h;
    cin >> h;
    int workingDays = 365-h;
    int timeForGames = workingDays*63 + h*127;
    int difference = 30000 - timeForGames;
    int hours = difference/60;
    int minutes = difference % 60;

    if (difference >= 0){
        cout << "Tom sleeps well"    <<endl;
        cout << hours << " hours and " << minutes << "minutes less for play";
    }
    else if (difference < 0){
        cout << "Tom will run away"  <<endl;
        cout << -hours << " hours and " <<- minutes << " minutes more for play";
        
    }
    }
     
    
