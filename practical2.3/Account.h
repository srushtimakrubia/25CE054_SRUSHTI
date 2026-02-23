#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>
#include<string>
using namespace std;

class Account
{
private:
    string name;
    int id;
    double balance;

public:
    Account();
    Account(string,int,double);
    void input();
    void deposit(double);
    void withdraw(double);
    void display();
};

#endif
