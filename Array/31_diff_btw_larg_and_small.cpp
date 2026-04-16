#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10, 4, 3, 50, 23, 90};

    int largest = *max_element(arr.begin(), arr.end());
    int smallest = *min_element(arr.begin(), arr.end());

    int diff = largest - smallest;

    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;
    cout << "Difference: " << diff << endl;

    return 0;
}