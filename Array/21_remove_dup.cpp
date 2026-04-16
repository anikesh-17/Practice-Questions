#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return;

    int i = 0;

    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    nums.resize(i + 1);
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int x : nums) {
        cout << x << " ";
    }

    cout << endl;
}