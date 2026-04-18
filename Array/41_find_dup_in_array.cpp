// Find the duplicate number in a sequence from 1 to n (with one duplicate)

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int n) {
    int xor1 = 0, xor2 = 0;

    for(int i = 1; i <= n; i++) {
        xor1 ^= i;
    }

    for(int i = 0; i < n + 1; i++) {
        xor2 ^= arr[i];
    }

    return xor1 ^ xor2;
}

int main() {
    int arr[] = {1, 3, 4, 2, 2};
    int n = 4;

    cout << "Duplicate number is: " << findDuplicate(arr, n);
    return 0;
}