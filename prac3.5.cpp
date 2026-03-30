#include<iostream>
using namespace std;

int len(long long n)
{
   if(n<0)
   {
       n=-n;
   }
   if(n<10)
   {
       return 1;
   }
   else
   {
       return 1 + len(n/10);
   }


}

int sum(long long n)
{
    if(n==0)
        return 0;
    else
    {
        return n%10 + sum(n/10);
    }
}

int main()
{
    int n;
    cout << "enter n :";
    cin >> n;
    int k;
    cout << "enter k :";
    cin >> k;
    cout <<"sum is = " << sum(n) << endl;
    cout << "len is =" << len(n) << endl;
     n = sum(n)*k;

    while(len(n)!=1)
    {
        n = sum(n);
    }

    cout << "super digit is : " << n;
    return 0;


}

