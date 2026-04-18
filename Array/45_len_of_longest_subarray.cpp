// Find the length of the longest sub array with all distinct element

#include <bits/stdc++.h>
using namespace std;

int longestDistinctSubarray(int arr[], int n) {
    unordered_set<int> s;
    int left = 0, maxLen = 0;

    for(int right = 0; right < n; right++) {
        while(s.find(arr[right]) != s.end()) {
            s.erase(arr[left]);
            left++;
        }
        s.insert(arr[right]);
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main() {
    int arr[] = {1, 2, 3, 1, 2, 3, 4, 5};
    int n = 8;

    cout << "Longest length: " << longestDistinctSubarray(arr, n);

    return 0;
}