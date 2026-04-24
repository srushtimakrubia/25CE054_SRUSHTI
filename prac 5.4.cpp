#include <iostream>
#include <iomanip>
using namespace std;

ostream& currency(ostream& out) {
    out << "₹ ";
    return out;
}

int main() {
    string name[3] = {"A", "B", "C"};
    float marks[3] = {85.5, 90.25, 78.75};
    float fees[3] = {10000, 12000, 9000};

    cout << setw(10) << "Name"
         << setw(10) << "Marks"
         << setw(10) << "Fees" << endl;

    cout << setfill('-') << setw(30) << "-" << endl;
    cout << setfill(' ');

    for (int i = 0; i < 3; i++) {
        cout << setw(10) << name[i]
             << setw(10) << fixed << setprecision(2) << marks[i]
             << setw(5) << currency << fees[i] << endl;
    }

    return 0;
}
