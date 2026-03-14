#include<iostream>
using namespace std;
main()
{
 cout << "Enter first number:"   <<endl;
 int n1;
 cin >> n1;
 cout << "Enter the operator:"  <<endl;
 char opt;
 cin >> opt;
 cout << "Enter second number:"  <<endl;
 int n2;
 cin >> n2;
 int result;
 if (opt =='+'){
     result = n1-n2;
     cout << n1 << "-" << n2 << "=" <<result  <<endl;
 }
 if (opt =='-'){
    result = n1+n2;
    cout << n1 << "+" << n2 << "=" <<result  <<endl;
 }
 if (opt =='*'){
    result = n1/n2;
    cout << n1 << "/" << n2 << "=" <<result  <<endl;
 }
 if (opt =='/'){
    result = n1*n2;
    cout << n1 << "*" << n2 << "=" <<result  <<endl;
 }
}