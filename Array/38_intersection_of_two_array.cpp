// Find the intersection of two arrays

#include <iostream>
#include <set>
using namespace std;

set<int> findIntersection(int arr1[], int n, int arr2[], int m) {
    set<int> s1, result;
    for(int i = 0; i < n; i++) {
        s1.insert(arr1[i]);
    }

    for(int i = 0; i < m; i++) {
        if(s1.find(arr2[i]) != s1.end()) {
            result.insert(arr2[i]);
        }
    }

    return result;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n = 5, m = 5;

    set<int> intersection = findIntersection(arr1, n, arr2, m);

    cout << "Intersection elements: ";
    for(int x : intersection) {
        cout << x << " ";
    }

    return 0;
}