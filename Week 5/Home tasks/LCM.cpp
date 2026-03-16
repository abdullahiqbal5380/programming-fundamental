#include<iostream>
using namespace std;
main()
{
    cout << "Enter the first number:" <<endl;
    int n1;
    cin >> n1;

    cout << "Enter the second number:" <<endl;
    int n2;
    cin >> n2;

    int remainder;
    int a,b;
    a = n1;
    b = n2;

    while (n2 != 0){
        remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    }
    cout << "GCD :" <<n1 <<endl;

    int lcm = (a*b)/n1;
    cout << "LCM :" <<lcm <<endl;

    }



    
