#include<iostream>
using namespace std;
main()
{
    cout << "Enter name of first brother:"   <<endl;
    string n1;
    cin >> n1;
    cout << "Enter age of first brother:"    <<endl;
    int a1;
    cin >> a1;
    cout << "Enter name of second brother:"   <<endl;
    string n2;
    cin >> n2;
    cout << "Enter age of second brother:"    <<endl;
    int a2;
    cin >> a2;
    cout << "Enter name of third brother:"    <<endl;
    string n3;
    cin >> n3;
    cout << "Enter age of third brother:"      <<endl;
    int a3;
    cin >> a3;
    
    if (a1 < a2 && a1 < a3){
        cout << n1 << " is youngest "   <<endl;
    }
    else if (a2 < a1 && a2 < a3){
        cout << n2 << " is youngest "    <<endl;
    }
    else{
        cout << n3 << " is youngest "     <<endl;
    }
    }
    

