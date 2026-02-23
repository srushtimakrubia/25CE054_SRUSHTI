#include "student.h"

int main()
{
    int n;
    cin>>n;

    Student s[100];

    for(int i=0;i<n;i++)
        s[i].input();

    for(int i=0;i<n;i++)
        s[i].display();

    Student t1;
    Student t2(1,"Demo",80,90,85);

    t1.display();
    t2.display();
}
