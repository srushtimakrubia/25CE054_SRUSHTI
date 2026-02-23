#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float m1,m2,m3;

public:
    Student();
    Student(int,string,float,float,float);
    void input();
    float average();
    void display();
};

#endif
