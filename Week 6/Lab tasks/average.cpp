#include<iostream>
using namespace std;
main()
{
    int sum=0;
    float average=0;
    int numbers[5] = {1,2,3,4,5};

    for (int i=0;i<5;i=i+1){
        sum = sum + numbers[i];
    }
    cout << " Sum :" <<sum <<endl;
    average = sum/5;
    cout << " Avg :" <<average<<endl;
}