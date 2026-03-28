#include <iostream>
using namespace std;
main()
{
    string sentence;
    cout << "Enter a string:";
    getline(cin, sentence);

    string result = "";
    char ch;
    for (int i = 0; i < sentence.length(); i = i + 1)
    {
        ch = sentence[i];

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
        {
            result += ch;
        }
    }
    cout << "String with vowels removed:" << result;
}