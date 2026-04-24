#include <iostream>
using namespace std;

int main() {
    int a, b;
    try {
        cin >> a >> b;
        if (cin.fail()) throw "Invalid Input";
        if (b == 0) throw b;
        cout << a / b;
    }
    catch (const char* msg) {
        cout << msg;
    }
    catch (int) {
        cout << "Division by zero";
    }
    return 0;
}
