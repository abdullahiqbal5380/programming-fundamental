#include<iostream>
using namespace std;
main()
{
    int salaryPerMonth = 10000;
    int laptopPrice = 50000;
    float advancedSalary = 0.50*6 * salaryPerMonth;
    if (advancedSalary >= laptopPrice){
        cout << "He can buy laptop"  <<endl;
    }
    else{ 
    float monthlyadvance = salaryPerMonth * 0.50 ;
         float advance_months_required = laptopPrice/monthlyadvance;
         cout << "Months required to buy laptop " <<advance_months_required   <<endl;
    }
    }

