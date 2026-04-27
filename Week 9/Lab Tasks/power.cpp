#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float base;
    float exponent;
    cout << "Enter the base number:"<<endl;
    cin >> base;
    cout << "Enter the exponent:"<<endl;
    cin >> exponent;

    cout <<base<< " raised to the power "<<exponent<< " is:"<<pow(base,exponent);

    return 0;
}