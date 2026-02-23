#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class account
{
public:
    int wallet_ID;
    string name;
    float current_balance;
    int load_money;

    account(); // constructor

    void get_data();
    void dis_data();
};

#endif
