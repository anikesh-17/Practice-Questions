#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    if (isSorted(arr)) {
        cout << "Array is sorted in ascending order";
    } else {
        cout << "Array is NOT sorted";
    }

    return 0;
}