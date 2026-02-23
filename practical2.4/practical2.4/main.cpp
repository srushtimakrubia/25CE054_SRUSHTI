#include "item.h"

int main()
{
    Item items[2] = {
        item(1,"Pen",10.5,50),
        item(2,"Book",45,20)
    };

    items[0].addStock(10);
    items[1].sellItem(5);

    for(int i=0;i<2;i++)
    {
        items[i].display();
        cout << endl;
    }

    return 0;
}
