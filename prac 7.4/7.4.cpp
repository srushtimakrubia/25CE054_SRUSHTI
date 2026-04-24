#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
    virtual double Area() = 0;
    virtual void display() = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double Area() {
        return length * width;
    }

    void display() {
        cout << "Rectangle Area: " << Area() << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double Area() {
        return 3.14 * radius * radius;
    }

    void display() {
        cout << "Circle Area: " << Area() << endl;
    }
};

int main() {
    vector<Shape*> shapes;

    shapes.push_back(new Rectangle(5, 4));
    shapes.push_back(new Circle(3));

    cout << "Dynamic Storage:\n";
    for (auto s : shapes) {
        s->display();
    }

    Shape* arr[2];
    arr[0] = new Rectangle(2, 3);
    arr[1] = new Circle(2);

    cout << "\nStatic Storage:\n";
    for (int i = 0; i < 2; i++) {
        arr[i]->display();
    }

    for (auto s : shapes) delete s;
    for (int i = 0; i < 2; i++) delete arr[i];

    return 0;
}
