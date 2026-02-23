#include "account.h"

Account::Account()
{
    name="Test";
    id=0;
    balance=0;
}

Account::Account(string n,int i,double b)
{
    name=n;
    id=i;
    if(b>=0) balance=b;
    else balance=0;
}

void Account::input()
{
    cin>>name>>id>>balance;
    if(balance<0) balance=0;
}

void Account::deposit(double amt)
{
    if(amt>0)
        balance+=amt;
}

void Account::withdraw(double amt)
{
    if(amt>0 && amt<=balance)
        balance-=amt;
    else
        cout<<"Invalid Withdraw"<<endl;
}

void Account::display()
{
    cout<<name<<" "<<id<<" "<<balance<<endl;
}
