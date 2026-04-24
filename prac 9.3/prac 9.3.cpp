
#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1,2,2,3,4,4,5};
    set<int> s;

    for (int i = 0; i < 7; i++) {
        s.insert(arr[i]);
    }

    for (int x : s) {
        cout << x << " ";
    }

    return 0;
}
