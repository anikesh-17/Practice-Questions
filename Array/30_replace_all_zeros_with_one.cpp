#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {0, 2, 0, 5, 6, 0, 1};

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            arr[i] = 1;
        }
    }

    cout << "Updated array: ";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}