#include <iostream>
#include <vector>
using namespace std;

class Grading {
protected:
    float marks;

public:
    Grading(float m) {
        marks = m;
    }

    virtual char computeGrade() = 0;
    virtual void display() = 0;
    virtual ~Grading() {}
};

class Undergraduate : public Grading {
public:
    Undergraduate(float m) : Grading(m) {}

    char computeGrade() {
        if (marks >= 75) return 'A';
        else if (marks >= 60) return 'B';
        else if (marks >= 50) return 'C';
        else return 'F';
    }

    void display() {
        cout << "UG Marks: " << marks << " Grade: " << computeGrade() << endl;
    }
};

class Postgraduate : public Grading {
public:
    Postgraduate(float m) : Grading(m) {}

    char computeGrade() {
        if (marks >= 80) return 'A';
        else if (marks >= 65) return 'B';
        else if (marks >= 55) return 'C';
        else return 'F';
    }

    void display() {
        cout << "PG Marks: " << marks << " Grade: " << computeGrade() << endl;
    }
};

int main() {
    vector<Grading*> students;

    students.push_back(new Undergraduate(78));
    students.push_back(new Undergraduate(55));
    students.push_back(new Postgraduate(82));
    students.push_back(new Postgraduate(60));

    for (auto s : students) {
        s->display();
    }

    for (auto s : students) delete s;

    return 0;
}
