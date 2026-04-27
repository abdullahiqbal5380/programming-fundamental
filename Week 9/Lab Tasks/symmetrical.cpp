#include <iostream>
using namespace std;
bool symmetrical(int num);

int main()
{
    int num;
    cout << "Enter a three-digit number:";
    cin >> num;

    if (symmetrical(num))
    {
        cout << "The number is symmetrical" << endl;
    }
    else
    {
        cout << "The number is not symmetrical" << endl;
    }
    return 0;
}
bool symmetrical(int num)
{
    int firstDig, lastDig;
    firstDig = num / 100;
    lastDig = num % 10;
    if (firstDig == lastDig)
    {
        return true;
    }
    else
    {
        return false;
    }
}