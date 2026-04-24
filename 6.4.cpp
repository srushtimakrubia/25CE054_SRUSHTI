#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Account {
protected:
    int accNo;
    double balance;
    stack<double> transactions;

public:
    Account(int no, double bal) {
        accNo = no;
        balance = bal;
    }

    virtual ~Account() {}

    virtual void deposit(double amt) {
        balance += amt;
        transactions.push(amt);
    }

    virtual void withdraw(double amt) {
        if (balance >= amt) {
            balance -= amt;
            transactions.push(-amt);
        } else {
            cout << "Insufficient Balance\n";
        }
    }

    void undoTransaction() {
        if (!transactions.empty()) {
            double last = transactions.top();
            transactions.pop();
            balance -= last;
        }
    }

    virtual void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(int no, double bal, double rate)
        : Account(no, bal) {
        interestRate = rate;
    }

    ~SavingsAccount() {}

    void applyInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        transactions.push(interest);
    }

    void display() {
        Account::display();
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "----------------------" << endl;
    }
};

class CurrentAccount : public Account {
private:
    double overdraftLimit;

public:
    CurrentAccount(int no, double bal, double limit)
        : Account(no, bal) {
        overdraftLimit = limit;
    }

    ~CurrentAccount() {}

    void withdraw(double amt) {
        if (balance + overdraftLimit >= amt) {
            balance -= amt;
            transactions.push(-amt);
        } else {
            cout << "Overdraft limit exceeded\n";
        }
    }

    void display() {
        Account::display();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    SavingsAccount s1(101, 5000, 5);
    CurrentAccount c1(201, 3000, 2000);

    s1.deposit(1000);
    s1.withdraw(500);
    s1.applyInterest();
    s1.display();

    s1.undoTransaction();
    cout << "\nAfter Undo:\n";
    s1.display();

    c1.deposit(2000);
    c1.withdraw(4000);
    c1.display();

    c1.undoTransaction();
    cout << "\nAfter Undo:\n";
    c1.display();

    return 0;
}
