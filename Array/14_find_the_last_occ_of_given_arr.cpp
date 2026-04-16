#include <bits/stdc++.h>
using namespace std;

int lastOccurrence(vector<int> &arr, int x) {
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] == x) return i;
    }
    return -1;
}

int main() {
    int n, x;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cin >> x;

    int index = lastOccurrence(arr, x);

    if (index != -1) cout << "Last occurrence at index: " << index;
    else cout << "Element not found";

    return 0;
}