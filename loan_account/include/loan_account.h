#ifndef LOAN_ACCOUNT_H
#define LOAN_ACCOUNT_H
#include<iostream>
#include<string>
using namespace std;




class loan_account
{
    public:
        loan_account();
        loan_account(string, int, double, float, int , float);

        void data_display();
        void data_insert();



    private:
        string  name;
        int loan_id;
        double loan_amount;
        float loan_interest_rate;
        int loan_tenur;
        float EMI;

        int emi_calc();
};

#endif // LOAN_ACCOUNT_H
