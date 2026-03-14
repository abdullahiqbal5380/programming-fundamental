#include<iostream>
using namespace std;
main()
{
    for (int i=1;i<=5;i=i+1){
        for (int j=5;j>5-i;j=j-1){
            cout << j << ""; 
        }
        cout <<endl;
    }
}