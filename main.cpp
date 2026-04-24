#include "person_employee_manager.h"
#include <iostream>

using namespace std;

void addManager(Manager m);
void displayAll();
void searchByID(int id);
void searchByDepartment(string dept);

int main() {
    Manager m1("Srushti", 20, 101, "HR");
    Manager m2("Ravi", 30, 102, "IT");
    Manager m3("Anita", 35, 103, "Finance");

    addManager(m1);
    addManager(m2);
    addManager(m3);

    cout << "\nAll Managers:\n";
    displayAll();

    searchByID(102);

    cout << "\nManagers in IT Department:\n";
    searchByDepartment("IT");

    m1.updateDepartment("Admin");
    cout << "\nAfter Update:\n";
    m1.displayManager();

    return 0;
}
