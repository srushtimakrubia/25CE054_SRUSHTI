#include "calculation.h"

float calculation::getArea()
{
    return length * width;
}

float calculation::setLength()
{
    cout << "Enter length:\n";
    cin >> length;
    return length;
}

float calculation::setWidth()
{
    cout << "Enter width:\n";
    cin >> width;
    return width;
}

void calculation::calculate_area()
{
    float area = length * width;
    cout << "\nArea = " << area;
}

void calculation::calculate_para()
{
    float para = 2 * (length + width);
    cout << "\nPerimeter = " << para;
}

void calculation::show_dimension()
{
    cout << "\nLength = " << length;
    cout << "\nWidth = " << width;
}

bool calculation::issquare()
{
    return (length == width);
}
