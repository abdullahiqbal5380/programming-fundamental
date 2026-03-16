#include<iostream>
using namespace std;
main()
{
    cout << "Enter numbers count :" <<endl;
    int n;
    cin >> n;
    
    float c1=0 , c2=0 , c3=0 , c4=0 , c5=0;

    for (int i=0;i<n;i=i+1){
        cout << "Enter a number:" <<endl;
        int num;
        cin >> num;

        if (num < 200){
            c1 = c1 + 1;
        }
        else if (num >= 200 && num <= 399){
            c2 = c2 + 1;
        }
        else if (num >= 400 && num <= 599){
            c3 = c3 + 1;
        }
        else if (num >= 600 && num <= 799){
            c4 = c4 + 1;
        }
        else {
            c5 = c5 + 1;
        }
    }
    cout << (c1/n)*100 << "%" <<endl;
    cout << (c2/n)*100 << "%" <<endl;
    cout << (c3/n)*100 << "%" <<endl;
    cout << (c4/n)*100 << "%" <<endl;
    cout << (c5/n)*100 << "%" <<endl;
    
}

