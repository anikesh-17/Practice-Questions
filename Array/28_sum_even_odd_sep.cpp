#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    int evenSum = 0, oddSum = 0;

    for (int x : arr) {
        if (x % 2 == 0) {
            evenSum += x;
        } else {
            oddSum += x;
        }
    }

    cout << "Sum of even elements: " << evenSum << endl;
    cout << "Sum of odd elements: " << oddSum << endl;

    return 0;
}