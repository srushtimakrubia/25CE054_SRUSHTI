#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    map<string, int> freq;
    stringstream ss(str);
    string word;

    while (ss >> word) {
        freq[word]++;
    }

    for (auto p : freq) {
        cout << p.first << " : " << p.second << endl;
    }

    return 0;
}
