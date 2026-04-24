#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator+=(Complex c) {
        real += c.real;
        imag += c.imag;
        return *this;
    }

    Complex operator*=(Complex c) {
        double r = real * c.real - imag * c.imag;
        double i = real * c.imag + imag * c.real;
        real = r;
        imag = i;
        return *this;
    }

    double magnitude() {
        return sqrt(real * real + imag * imag);
    }

    double phase() {
        return atan2(imag, real);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;

    c3.display();
    c4.display();

    c1 += c2;
    c1.display();

    c1 *= c2;
    c1.display();

    cout << "Magnitude: " << c1.magnitude() << endl;
    cout << "Phase: " << c1.phase() << endl;

    vector<Complex> arr;
    arr.push_back(Complex(1, 1));
    arr.push_back(Complex(2, 2));
    arr.push_back(Complex(3, 3));

    Complex sum;
    for (auto &c : arr) {
        sum += c;
    }

    cout << "Batch Sum: ";
    sum.display();

    return 0;
}
