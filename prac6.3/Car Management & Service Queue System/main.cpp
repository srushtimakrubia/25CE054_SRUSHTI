#include "fuel_brand_car.h"
#include <iostream>

using namespace std;

void addCar(Car c);
void processQueue();
void displayAllCars();
void searchByID(int id);

int main() {
    Car c1(1, "Petrol", "Toyota");
    Car c2(2, "Diesel", "Honda");
    Car c3(3, "Electric", "Tesla");

    addCar(c1);
    addCar(c2);
    addCar(c3);

    cout << "\nAll Cars:\n";
    displayAllCars();

    cout << "\nService Queue:\n";
    processQueue();

    searchByID(2);

    return 0;
}
