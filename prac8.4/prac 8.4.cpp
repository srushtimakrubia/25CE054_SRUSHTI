#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    string filename, line;

    while (true) {
        cout << "Enter file name: ";
        cin >> filename;

        ifstream file(filename);
        if (!file.is_open()) {
            cout << "File not found\n";
            continue;
        }

        int lineNo = 0;
        while (getline(file, line)) {
            lineNo++;
            stringstream ss(line);
            int num, sum = 0;
            bool valid = true;

            while (ss >> num) {
                sum += num;
            }

            if (!ss.eof()) valid = false;

            if (valid)
                cout << "Line " << lineNo << " Sum: " << sum << endl;
            else
                cout << "Invalid data at line " << lineNo << endl;
        }
        break;
    }
    return 0;
}
