#include<iostream>
using namespace std;
main()
{
    cout << "Enter the name of figure:"   <<endl;
    string name;
    cin >> name;
    float area;
    if (name=="square"){
        cout << "Enter the length:"   <<endl;
        int length;
        cin >> length;
        area = length*length;
    }
    if (name=="rectangle"){
        cout << "Enter the length:"      <<endl;
        int length;
        cin >> length;
        cout << "Enter the width:"       <<endl;
        float width;
        cin >> width;
        area = length*width;
    }
    if (name=="circle"){
        cout << "Enter the radius of circle:"   <<endl;
        int r;
        cin >> r;
        float pi = 3.147;
        area = pi*r*r;
    }
    if (name=="triangle"){
        cout << "Enter the length of base:"    <<endl;
        float base;
        cin >> base;
        cout << "Enter the length of its height:"    <<endl;
        int height;
        cin >> height;
        area = 0.5*base*height;
    }
    cout << "Output is : " <<area   <<endl;

    }





    

    
