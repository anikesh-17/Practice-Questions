#include <bits/stdc++.h>
using namespace std;

int cntOcc(int arr[], int n, int target) {
    map<int, int> mpp;
    for(int i = 0; i<n; i++) {
        mpp[arr[i]]++;
    }
    for(auto it : mpp) {
        if(it.first == target) {
            return it.second;
        }
    }
    return 0;
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

    cout << "Number of Occurences : " << cntOcc(arr, n, target) << endl;
    return 0;
}