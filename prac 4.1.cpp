#include <iostream>
using namespace std;

class DynamicArray {
    int* arr;
    int size;

public:
    DynamicArray() {
        arr = nullptr;
        size = 0;
    }

    void insert(int value) {
        int* temp = new int[size + 1];
        for (int i = 0; i < size; i++) {
            temp[i] = arr[i];
        }
        temp[size] = value;
        delete[] arr;
        arr = temp;
        size++;
    }

    void insertAt(int pos, int value) {
        if (pos < 0 || pos > size) {
            cout << "Invalid Position\n";
            return;
        }

        int* temp = new int[size + 1];
        for (int i = 0; i < pos; i++) {
            temp[i] = arr[i];
        }
        temp[pos] = value;
        for (int i = pos; i < size; i++) {
            temp[i + 1] = arr[i];
        }

        delete[] arr;
        arr = temp;
        size++;
    }

    void remove(int pos) {
        if (size == 0 || pos < 0 || pos >= size) {
            cout << "Invalid Position\n";
            return;
        }

        int* temp = new int[size - 1];
        for (int i = 0; i < pos; i++) {
            temp[i] = arr[i];
        }
        for (int i = pos + 1; i < size; i++) {
            temp[i - 1] = arr[i];
        }

        delete[] arr;
        arr = temp;
        size--;
    }

    int search(int value) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) return i;
        }
        return -1;
    }

    int countOccurrences(int value) {
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) count++;
        }
        return count;
    }

    void display() {
        if (size == 0) {
            cout << "Array is empty\n";
            return;
        }
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~DynamicArray() {
        delete[] arr;
    }
};

int main() {
    DynamicArray d;

    d.insert(10);
    d.insert(20);
    d.insert(30);

    d.display();

    d.insertAt(1, 15);
    d.display();

    d.remove(2);
    d.display();

    cout << "Search 15: " << d.search(15) << endl;
    cout << "Count of 10: " << d.countOccurrences(10) << endl;

    return 0;
}
