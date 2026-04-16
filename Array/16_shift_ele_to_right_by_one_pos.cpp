#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();
        int temp = nums[n - 1];

        for (int i = n - 2; i >= 0; --i) {
            nums[i + 1] = nums[i];
        }

        nums[0] = temp;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3, 4, 5};

    obj.rotateArrayByOne(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}