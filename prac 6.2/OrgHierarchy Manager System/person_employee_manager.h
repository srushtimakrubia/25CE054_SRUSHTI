
#ifndef PERSON_EMPLOYEE_MANAGER_H
#define PERSON_EMPLOYEE_MANAGER_H

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    int empID;

public:
    Employee(string n, int a, int id) : Person(n, a) {
        empID = id;
    }

    void displayEmployee() {
        displayPerson();
        cout << "Employee ID: " << empID << endl;
    }

    int getID() {
        return empID;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    Manager(string n, int a, int id, string dept)
        : Employee(n, a, id) {
        department = dept;
    }

    void displayManager() {
        displayEmployee();
        cout << "Department: " << department << endl;
        cout << "------------------------" << endl;
    }

    string getDepartment() {
        return department;
    }

    void updateDepartment(string newDept) {
        department = newDept;
    }
};

#endif
