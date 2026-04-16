#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {3, -1, 5, -7, 2, -4};

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "Updated array: ";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}