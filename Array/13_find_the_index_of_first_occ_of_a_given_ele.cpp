#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> v, int target) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == target) {
            return v[i];
        }
    }
    return -1;
}

int main() {
    vector<int> v = {2,4,6,6,3,4,2,2,7,4,3};
    int target = 3;
    cout << firstOcc(v, target) << endl;
    return 0;
}