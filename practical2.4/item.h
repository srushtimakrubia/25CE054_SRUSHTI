#ifndef ITEM_H
#define ITEM_H
#include <iostream>
using namespace std;

class Item
{
private:
    int id;
    string name;
    double price;
    int quantity;

public:
    Item();
    Item(int, string, double, int);
    void addStock(int);
    void sellItem(int);
    void display();
};

#endif
