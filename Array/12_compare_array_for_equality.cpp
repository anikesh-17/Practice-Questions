#include <bits/stdc++.h>
using namespace std;

bool areEqual(vector<int> &a, vector<int> &b) {
    if (a.size() != b.size()) return false;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    if (areEqual(a, b)) cout << "Equal";
    else cout << "Not Equal";

    return 0;
}