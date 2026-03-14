#include<iostream>
using namespace std;
main()
{
    int table;
    int multiple;

    cout << "Multiplication Table of 24:" <<endl;
    table=24;
    for (int i=1;i<=10;i=i+1){
        multiple = table*i;
        cout << table << "*" << i << "=" << multiple <<endl;
    }
    cout << "Multiplication Table of 50:" <<endl;
    table=50;
    for (int i=1;i<=10;i=i+1){
        multiple = table*i;
        cout << table << "*" << i << "=" << multiple <<endl;
}
    cout << "Multiplication Table of 29:" <<endl;
    table=29;
    for (int i=1;i<=10;i=i+1){
        multiple = table*i;
        cout << table << "*" << i << "=" << multiple <<endl;
}
}
