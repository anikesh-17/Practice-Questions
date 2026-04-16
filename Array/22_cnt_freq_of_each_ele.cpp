#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4};

    unordered_map<int, int> freq;

    for (int num : nums) {
        freq[num]++;
    }

    cout << "Element -> Frequency\n";
    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}