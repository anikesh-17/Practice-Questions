#include <bits/stdc++.h>
using namespace std;

void copyEle(vector<int> &v) {
    vector<int> newArr = v;

    for (int x : newArr) {
        cout << x << endl;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    copyEle(v);

    return 0;
}