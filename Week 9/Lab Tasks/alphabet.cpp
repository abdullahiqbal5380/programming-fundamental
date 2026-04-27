#include <iostream>
using namespace std;
string alphabetCheck(char letter);

int main()
{
    char letter;
    cout << "Enter a letter (A/a):";
    cin >> letter;

    string result;
    result = alphabetCheck(letter);
    cout << result << endl;
    return 0;
}
string alphabetCheck(char letter)
{
    if (letter == 'A')
    {
        return "You have entered Capital A";
    }
    else if (letter == 'a')
    {
        return "You have entered small a";
    }
}