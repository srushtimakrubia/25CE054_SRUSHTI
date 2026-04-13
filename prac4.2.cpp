#include<iostream>
using namespace std;

class point
{
public:
    int x;
    int y;
    point(int x , int y)
    {
        this->x=x;
        this->y=y;

    }
    point& move(int dx, int dy)
    {
        this->x += dx;
        this->y += dy;
        return *this;
    }
    void display()
    {
        cout << "(" << x << "," << y << ")"  ;
    }
    void update()
    {
        move(5,5);
    }
};


int main()
{
    point p(2,3);
    p.move(3,4).move(-1,3);
    p.display();


    p.update();
    p.move(1,1);
    p.display();
   return 0;
}
