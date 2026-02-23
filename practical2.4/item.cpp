#include "Item.h"

Item::Item()
{
    id = 0;
    name = "";
    price = 0;
    quantity = 0;
}

Item::Item(int i, string n, double p, int q)
{
    id = i;
    name = n;
    price = p;
    quantity = q;
}

void Item::addStock(int q)
{
    quantity += q;
}

void Item::sellItem(int q)
{
    if(q <= quantity)
        quantity -= q;
    else
        cout << "Not enough stock\n";
}

void Item::display()
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
}
