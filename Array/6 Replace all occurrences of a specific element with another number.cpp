#include <bits/stdc++.h>
using namespace std;

void replaceElement(int arr[], int n, int target, int newVal) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            arr[i] = newVal;
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target, newVal;
    cout << "enter target element";
    cin >> target;
    cout << "enter new element";
    cin>>newVal;

    replaceElement(arr, n, target, newVal);

    cout << "new array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}