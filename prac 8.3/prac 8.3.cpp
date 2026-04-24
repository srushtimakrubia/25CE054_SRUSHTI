#include <iostream>
using namespace std;

string logArr[10];
int idx = 0;

void log(string msg) {
    logArr[idx++] = msg;
}

class BankAccount {
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    void deposit(double amt) {
        log("Deposit Start");
        if (amt <= 0) throw "Invalid Deposit";
        balance += amt;
        log("Deposit End");
    }

    void withdraw(double amt) {
        log("Withdraw Start");
        if (amt > balance) throw "Insufficient Funds";
        balance -= amt;
        log("Withdraw End");
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(1000);

    try {
        acc.deposit(500);
        acc.withdraw(2000);
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    for (int i = 0; i < idx; i++) {
        cout << logArr[i] << endl;
    }

    acc.display();
    return 0;
}
