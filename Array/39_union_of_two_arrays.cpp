// Find the union of two arrays

#include <iostream>
#include <set>
using namespace std;

// Function to find union
set<int> findUnion(int arr1[], int n, int arr2[], int m) {
    set<int> result;

    for(int i = 0; i < n; i++) {
        result.insert(arr1[i]);
    }

    for(int i = 0; i < m; i++) {
        result.insert(arr2[i]);
    }

    return result;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n = 4, m = 4;

    set<int> uni = findUnion(arr1, n, arr2, m);

    cout << "Union elements: ";
    for(int x : uni) {
        cout << x << " ";
    }

    return 0;
}