#include<bits/stdc++.h>
using namespace std;

bool findElement(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return true;
        }
    }
    return false;
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

    int target;
    cout << "Enter target element : ";
    cin >> target;

    cout << (findElement(arr, n, target) ? "yes" : "no") << endl;
    return 0;
}