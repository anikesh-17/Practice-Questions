// binary search
#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int n, int target) {
    sort(arr, arr+n);
    int low = arr[0];
    int high = arr[n-1];
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) {
            return true;
        }
        else if(target > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "enter no of elements : ";
    cin>>n;
    int arr[n];
    cout<< "enter array elements : " << endl;
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }
    int target;
    cout << "enter target element : ";
    cin>>target;
    cout << (binarySearch(arr,n,target) ? "Yes" : "No" ) << endl;
    return 0;
}