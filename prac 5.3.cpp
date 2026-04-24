#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void addItem() {
    ofstream file("inventory.txt", ios::app);
    string name;
    int qty;
    float price;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter quantity: ";
    cin >> qty;
    cout << "Enter price: ";
    cin >> price;

    file << name << " " << qty << " " << price << endl;
    file.close();
}

void viewItems() {
    ifstream file("inventory.txt");
    string name;
    int qty;
    float price;

    while (file >> name >> qty >> price) {
        cout << name << " " << qty << " " << price << endl;
    }

    file.close();
}

void searchItem() {
    ifstream file("inventory.txt");
    string name, search;
    int qty;
    float price;

    cout << "Enter item name: ";
    cin >> search;

    while (file >> name >> qty >> price) {
        if (name == search) {
            cout << name << " " << qty << " " << price << endl;
        }
    }

    file.close();
}

int main() {
    int choice;

    cout << "1.Add 2.View 3.Search\n";
    cin >> choice;

    if (choice == 1) addItem();
    else if (choice == 2) viewItems();
    else if (choice == 3) searchItem();

    return 0;
}
