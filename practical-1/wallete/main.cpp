#include <iostream>
#include "account.h"
using namespace std;

int main()
{
    account a[2];
    int i, ch, acc_no;
    float load_money, t_money;

    for(i=0;i<2;i++)
    {
        cout<<"\nEnter details for account "<<i<<endl;
        a[i].get_data();
    }

    int y=1;
    while(y==1)
    {
        cout<<"\n===== MENU =====\n";
        cout<<"1. Load money\n";
        cout<<"2. Transfer money\n";
        cout<<"3. Display accounts\n";
        cout<<"4. Exit\n";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter account no (0 or 1): ";
                cin>>acc_no;

                if(acc_no>=0 && acc_no<2)
                {
                    cout<<"Enter amount: ";
                    cin>>load_money;
                    a[acc_no].current_balance += load_money;
                }
                else
                    cout<<"Invalid account\n";
                break;

            case 2:
                cout<<"Transfer FROM (0 or 1): ";
                cin>>acc_no;

                cout<<"Amount: ";
                cin>>t_money;

                if(acc_no==0)
                {
                    a[0].current_balance -= t_money;
                    a[1].current_balance += t_money;
                }
                else if(acc_no==1)
                {
                    a[1].current_balance -= t_money;
                    a[0].current_balance += t_money;
                }
                else
                    cout<<"Invalid account\n";
                break;

            case 3:
                for(i=0;i<2;i++)
                    a[i].dis_data();
                break;

            case 4:
                y=0;
                break;

            default:
                cout<<"Wrong choice\n";
        }
    }
}
