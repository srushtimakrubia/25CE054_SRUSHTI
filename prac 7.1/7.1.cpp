#include <iostream>
#include <vector>
using namespace std;

class Calculator {
private:
    vector<double> results;

public:
    int add(int a, int b) {
        int res = a + b;
        results.push_back(res);
        return res;
    }

    float add(float a, float b) {
        float res = a + b;
        results.push_back(res);
        return res;
    }

    double add(int a, double b) {
        double res = a + b;
        results.push_back(res);
        return res;
    }

    double add(double a, int b) {
        double res = a + b;
        results.push_back(res);
        return res;
    }

    int subtract(int a, int b) {
        int res = a - b;
        results.push_back(res);
        return res;
    }

    float subtract(float a, float b) {
        float res = a - b;
        results.push_back(res);
        return res;
    }

    int multiply(int a, int b) {
        int res = a * b;
        results.push_back(res);
        return res;
    }

    float multiply(float a, float b) {
        float res = a * b;
        results.push_back(res);
        return res;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Division by zero error\n";
            return 0;
        }
        double res = a / b;
        results.push_back(res);
        return res;
    }

    int add(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        results.push_back(sum);
        return sum;
    }

    void displayResults() {
        cout << "\nStored Results:\n";
        for (double r : results) {
            cout << r << endl;
        }
    }
};

int main() {
    Calculator c;

    cout << c.add(10, 20) << endl;
    cout << c.add(5.5f, 2.5f) << endl;
    cout << c.add(10, 3.5) << endl;

    cout << c.subtract(20, 5) << endl;
    cout << c.multiply(4, 5) << endl;
    cout << c.divide(10, 2) << endl;

    int arr[] = {1, 2, 3, 4, 5};
    cout << c.add(arr, 5) << endl;

    c.displayResults();

    return 0;
}
