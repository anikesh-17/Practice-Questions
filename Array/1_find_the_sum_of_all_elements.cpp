// Find the sum of all elements in an array.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> vec(n);
    int sum = 0;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        sum += vec[i];
    }
    cout << "Sum : " << sum << endl;
}