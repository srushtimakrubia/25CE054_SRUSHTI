#include "loan_account.h"
#include<iostream>

#include<cmath>


loan_account::loan_account()
{
    name = "";
    loan_id = 0;
    loan_amount = 0;
    loan_interest_rate = 0;
    loan_tenur = 0;
}
loan_account :: loan_account(string n, int id, double amount, float rate , int tenur )
{
    name = n;
    loan_id = id;
    loan_amount = amount;
    loan_interest_rate = rate;
    loan_tenur = tenur;
}

void loan_account ::data_insert()
     {
         cout << "enter your name : ";
         cin >> name;

         cout << "enter loan ID : ";
         cin >> loan_id;

         cout << "enter loan amount;";
         cin >> loan_amount;

         cout << "enter loan interest rate in % : " ;
         cin >> loan_interest_rate;

         cout << "enter loan tenure : ";
         cin >>  loan_tenur;

     }
int loan_account :: emi_calc()
     {
         double p = loan_amount;
         float r = loan_interest_rate;
         int t = loan_tenur;

         EMI = p*r*pow(1+r,t) / (pow(1+r,t) - 1);

         return EMI;
     }

void loan_account ::data_display()
    {
        float repay_amount;
        cout << "\n name is : " <<  name;
        cout << "\n loan id is : " << loan_id;
        cout << "\n loan amount is : "<< loan_amount;
        cout << "\n loan interest rate is : "<< loan_interest_rate;
        cout << "\n loan tenure(month) is : "<< loan_tenur;
        cout << "\n YOUR EMI IS = " << emi_calc();

        repay_amount = EMI*loan_tenur;

        cout << "REPAY AMOUNT IS = " << repay_amount ;


    }

