#include <iostream>
using namespace std;

int countGreater(int arr[], int n, int x) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > x) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number: ";
    cin >> x;

    int result = countGreater(arr, n, x);

    cout << "Number of elements greater than " << x << " is: " << result;

    return 0;
}