#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int maxi = v[0];
    int mini = v[n-1];
    cout << "maximum : " << maxi << endl;
    cout << "minimum : " << mini << endl;
}