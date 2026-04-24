#ifndef FUEL_BRAND_CAR_H
#define FUEL_BRAND_CAR_H

#include <iostream>
#include <string>
using namespace std;

class Fuel {
protected:
    string fuelType;

public:
    Fuel(string f) {
        fuelType = f;
    }

    void displayFuel() {
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class Brand {
protected:
    string brandName;

public:
    Brand(string b) {
        brandName = b;
    }

    void displayBrand() {
        cout << "Brand: " << brandName << endl;
    }
};

class Car : public Fuel, public Brand {
private:
    int carID;

public:
    Car(int id, string f, string b)
        : Fuel(f), Brand(b) {
        carID = id;
    }

    void displayCar() {
        cout << "Car ID: " << carID << endl;
        displayBrand();
        displayFuel();
        cout << "----------------------" << endl;
    }

    int getID() {
        return carID;
    }

    string getFuel() {
        return fuelType;
    }
};

#endif
