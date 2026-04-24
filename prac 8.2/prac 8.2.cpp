#include <iostream>
#include <cmath>
using namespace std;

class NegativeNumberException {
public:
    void message() {
        cout << "Negative number not allowed";
    }
};

int main() {
    double num;
    try {
        cin >> num;
        if (num < 0) throw NegativeNumberException();
        cout << sqrt(num);
    }
    catch (NegativeNumberException e) {
        e.message();
    }
    return 0;
}
