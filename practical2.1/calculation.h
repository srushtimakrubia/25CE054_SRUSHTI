#ifndef CALCULATION_H
#define CALCULATION_H

#include<iostream>
using namespace std;

class calculation
{
private:
    float length;
    float width;

public:
    void calculate_area();
    void calculate_para();
    void show_dimension();
    bool issquare();

    float getArea();

    float setLength();
    float setWidth();
};

#endif
