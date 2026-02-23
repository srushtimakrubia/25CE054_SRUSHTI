#include "student.h"

Student::Student()
{
    roll=0;
    name="Test";
    m1=0;
    m2=0;
    m3=0;
}

Student::Student(int r,string n,float a,float b,float c)
{
    roll=r;
    name=n;
    if(a>=0 && a<=100) m1=a; else m1=0;
    if(b>=0 && b<=100) m2=b; else m2=0;
    if(c>=0 && c<=100) m3=c; else m3=0;
}

void Student::input()
{
    cin>>roll>>name>>m1>>m2>>m3;
    if(m1<0||m1>100) m1=0;
    if(m2<0||m2>100) m2=0;
    if(m3<0||m3>100) m3=0;
}

float Student::average()
{
    return (m1+m2+m3)/3;
}

void Student::display()
{
    cout<<roll<<" "<<name<<" "<<m1<<" "<<m2<<" "<<m3<<" "<<average()<<endl;
}
