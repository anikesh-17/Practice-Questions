// Find the average of array element
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

    double avg = (double)sum / n;
    cout << "Average: " << avg << endl;

    return 0;
}