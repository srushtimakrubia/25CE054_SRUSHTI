#include "fuel_brand_car.h"
#include <queue>
#include <vector>

using namespace std;

queue<Car> serviceQueue;
vector<Car> carList;

void addCar(Car c) {
    serviceQueue.push(c);
    carList.push_back(c);
}

void processQueue() {
    while (!serviceQueue.empty()) {
        Car c = serviceQueue.front();
        cout << "\nProcessing Car:\n";
        c.displayCar();
        serviceQueue.pop();
    }
}

void displayAllCars() {
    for (auto &c : carList) {
        c.displayCar();
    }
}

void searchByID(int id) {
    for (auto &c : carList) {
        if (c.getID() == id) {
            cout << "\nCar Found:\n";
            c.displayCar();
            return;
        }
    }
    cout << "Car not found\n";
}
