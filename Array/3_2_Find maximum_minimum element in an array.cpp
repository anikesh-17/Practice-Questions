#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
        mini = min(mini, v[i]);
    }
    cout << "maximum : " << maxi << endl;
    cout << "minimum : " << mini << endl;
}