#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> arr, int n) {
    int large = INT_MIN, second_large = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        }
        else if (arr[i] > second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }
    return second_large;
}

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

   cout << secondLargest(arr, n) << endl;

    return 0;
}