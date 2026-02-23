#include "account.h"

account::account()
{
    wallet_ID = 0;
    name = "";
    current_balance = 0;
    load_money = 0;
}

void account::get_data()
{
    cout << "Enter wallet ID: ";
    cin >> wallet_ID;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter balance: ";
    cin >> current_balance;
}

void account::dis_data()
{
    cout << "\n---------------------\n";
    cout << "Wallet ID : " << wallet_ID << endl;
    cout << "Name      : " << name << endl;
    cout << "Balance   : " << current_balance << endl;
    cout << "---------------------\n";
}
