#include <bits/stdc++.h>
using namespace std;

void findSmallest3(vector<int>& arr) {
    int first = INT_MAX, second = INT_MAX, third = INT_MAX;

    for (int x : arr) {
        if (x < first) {
            third = second;
            second = first;
            first = x;
        }
        else if (x < second && x != first) {
            third = second;
            second = x;
        }
        else if (x < third && x != second && x != first) {
            third = x;
        }
    }

    cout << "Smallest 3 elements: " << first << " " << second << " " << third;
}

int main() {
    vector<int> arr = {10, 4, 3, 50, 23, 90};

    findSmallest3(arr);

    return 0;
}