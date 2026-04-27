#include <iostream>
using namespace std;
string text(int num);

int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;

    if (num >=1 && num <=99){
    string result;
    result = text(num);
    cout << result;
    return 0;
    }
}
string text(int num)
{
   string ones[] = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten",
                    "Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    string tens[] = {"","","Twenty","thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    
    if (num < 20){
        return ones[num];
    }
    else{
        return tens[num/10] + ones[num%10];
    }
}