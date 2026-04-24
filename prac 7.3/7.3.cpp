#include <iostream>
#include <queue>
using namespace std;

class Fahrenheit;

class Celsius {
private:
    double temp;

public:
    Celsius(double t = 0) {
        temp = t;
    }

    double getTemp() {
        return temp;
    }

    operator Fahrenheit();

    bool operator==(Celsius c) {
        return temp == c.temp;
    }

    void display() {
        cout << temp << " C" << endl;
    }
};

class Fahrenheit {
private:
    double temp;

public:
    Fahrenheit(double t = 0) {
        temp = t;
    }

    double getTemp() {
        return temp;
    }

    operator Celsius() {
        return Celsius((temp - 32) * 5 / 9);
    }

    bool operator==(Fahrenheit f) {
        return temp == f.temp;
    }

    void display() {
        cout << temp << " F" << endl;
    }
};

Celsius::operator Fahrenheit() {
    return Fahrenheit((temp * 9 / 5) + 32);
}

int main() {
    Celsius c1(25);
    Fahrenheit f1;

    f1 = c1;
    f1.display();

    Celsius c2;
    c2 = f1;
    c2.display();

    if (c1 == c2) {
        cout << "Temperatures are equal\n";
    } else {
        cout << "Temperatures are not equal\n";
    }

    queue<Celsius> q;
    q.push(Celsius(10));
    q.push(Celsius(20));
    q.push(Celsius(30));

    cout << "\nQueue Processing:\n";
    while (!q.empty()) {
        Fahrenheit f = q.front();
        f.display();
        q.pop();
    }

    Celsius arr[3] = {Celsius(5), Celsius(15), Celsius(25)};

    cout << "\nArray Storage:\n";
    for (int i = 0; i < 3; i++) {
        Fahrenheit f = arr[i];
        f.display();
    }

    return 0;
}
