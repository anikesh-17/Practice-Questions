// Find the missing number in sequence

#include <bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int n) {
    int total = (n * (n + 1)) / 2;
    int sum = 0;

    for(int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    return total - sum;
}

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5;

    cout << "Missing number is: " << findMissing(arr, n);

    return 0;
}