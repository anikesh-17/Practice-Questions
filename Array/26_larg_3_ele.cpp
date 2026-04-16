#include <bits/stdc++.h>
using namespace std;

void findTop3(vector<int>& arr) {
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int x : arr) {
        if (x > first) {
            third = second;
            second = first;
            first = x;
        }
        else if (x > second && x != first) {
            third = second;
            second = x;
        }
        else if (x > third && x != second && x != first) {
            third = x;
        }
    }

    cout << "Top 3 elements: " << first << " " << second << " " << third;
}

int main() {
    vector<int> arr = {10, 4, 3, 50, 23, 90};

    findTop3(arr);

    return 0;
}