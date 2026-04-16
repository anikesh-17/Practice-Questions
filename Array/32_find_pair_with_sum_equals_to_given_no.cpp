// find all the pairs of elements whose sum is equal to a given number
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 6;

    cout << "Pairs:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == target) {
                cout << arr[i] << ", " << arr[j] << endl;
            }
        }
    }

    return 0;
}