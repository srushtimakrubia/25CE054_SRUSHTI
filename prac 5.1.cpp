#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string paragraph;
    getline(cin, paragraph);

    string words[100];
    int freq[100] = {0};
    int count = 0;

    string temp = "";

    for (int i = 0; i <= paragraph.length(); i++) {
        char ch = paragraph[i];

        if (isalpha(ch)) {
            temp += tolower(ch);
        } else {
            if (temp != "") {
                int index = -1;

                for (int j = 0; j < count; j++) {
                    if (words[j] == temp) {
                        index = j;
                        break;
                    }
                }

                if (index == -1) {
                    words[count] = temp;
                    freq[count] = 1;
                    count++;
                } else {
                    freq[index]++;
                }

                temp = "";
            }
        }
    }

    cout << "\nWords and Frequencies:\n";
    for (int i = 0; i < count; i++) {
        cout << words[i] << " : " << freq[i] << endl;
    }

    return 0;
}
