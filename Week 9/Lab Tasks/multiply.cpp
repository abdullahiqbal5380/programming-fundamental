#include <iostream>
using namespace std;

int myFunction(int num);
int main()
{
    int num,result;
    cout << "Enter the number:";
    cin >> num;

    result = myFunction(num);
    cout <<result<<endl;
    return 0;
}
int myFunction(int num)
{
    int total;
    total = num * 5;
    return total;
}