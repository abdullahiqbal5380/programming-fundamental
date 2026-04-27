#include <iostream>
using namespace std;
string oddEven(int num);

int main()
{
    cout << "Enter a five-digit number:";
    int num;
    cin >> num;

    string result;
    result = oddEven(num);
    cout << result;
    return 0;
}
string oddEven(int num)
{
    int sum;
    int dig1, dig2, dig3, dig4, dig5;
    dig1 = num / 10000;
    dig2 = (num / 1000) % 10;
    dig3 = (num / 100) % 10;
    dig4 = (num / 10) % 10;
    dig5 = num % 10;
    sum = dig1 + dig2 + dig3 + dig4 + dig5;

    if (sum % 2 == 0)
    {
        return "Evenish";
    }
    else
    {
        return "Oddish";
    }
}
