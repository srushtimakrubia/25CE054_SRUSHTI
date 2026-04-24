
#include "person_employee_manager.h"
#include <vector>

using namespace std;

vector<Manager> managers;

void addManager(Manager m) {
    managers.push_back(m);
}

void displayAll() {
    for (auto &m : managers) {
        m.displayManager();
    }
}

void searchByID(int id) {
    for (auto &m : managers) {
        if (m.getID() == id) {
            cout << "\nManager Found:\n";
            m.displayManager();
            return;
        }
    }
    cout << "Manager not found!\n";
}

void searchByDepartment(string dept) {
    for (auto &m : managers) {
        if (m.getDepartment() == dept) {
            m.displayManager();
        }
    }
}
