#include<iostream>
using namespace std;
main()
{
    cout << "Enter money:"  <<endl;
    float money;
    cin >> money;
    cout << "Enter the Year:" <<endl;
    int year;
    cin >> year;
    int age = 18;

    for (int i=1800;i<=year;i=i+1){
        if (i%2 == 0){
            money -= 12000;
        }
        else{
            money -= (12000+50*age);
        }
        age = age+1;
    }
    if (money >= 0){
        cout << "Yes! He will leave a carefree life and will have " <<money<< " dollars left." <<endl;
    }
    else{
        cout << "He will need " <<-money<< " dollars to survive " <<endl;
    }
}