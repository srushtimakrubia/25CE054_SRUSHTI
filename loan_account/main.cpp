#include <iostream>
#include "loan_account.h"


using namespace std;

int main()
{
    //default paramiterised constructor
   loan_account l1;
   l1.data_insert();
   l1.data_display();

   //parameterised constructor
   loan_account l2("srushti", 2 , 2000 , 3 , 2);
   l2.data_display();


}
