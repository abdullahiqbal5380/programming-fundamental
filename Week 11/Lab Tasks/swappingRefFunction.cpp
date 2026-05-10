#include <iostream>
using namespace std;

void swapWithReferences(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 5, b = 10;
    cout << "Before swap:a= " << a << " b= " << b << endl;
    swapWithReferences(a, b);
    cout << "After swap:a= " << a << " b= " << b << endl;
    return 0;
}