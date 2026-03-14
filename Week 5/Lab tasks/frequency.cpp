#include<iostream>
using namespace std;
main()
{
    cout << "Enter the number:" <<endl;
    int n;
    cin >> n;
    cout << "Enter the digit:"<<endl;
    int dig;
    cin >> dig;
    int count = 0;

    for (int i=n;i>0;i=i/10){
        if (i%10 == dig){
            count = count +1;}
    }
    cout << "Frequency of " <<dig<< " in " <<n<< " is : " <<count<<endl;

}