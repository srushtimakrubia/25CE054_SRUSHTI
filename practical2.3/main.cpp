#include "account.h"

int main()
{
    int n;
    cin>>n;

    Account a[100];

    for(int i=0;i<n;i++)
        a[i].input();

    for(int i=0;i<n;i++)
    {
        double d,w;
        cin>>d>>w;
        a[i].deposit(d);
        a[i].withdraw(w);
    }

    for(int i=0;i<n;i++)
        a[i].display();

    Account t1;
    Account t2("Demo",101,5000);

    t1.display();
    t2.display();
}
