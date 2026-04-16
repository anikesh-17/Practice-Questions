#include<bits/stdc++.h>
using namespace std;

void seperateOddEven(int n, vector<int> &arr) {
    vector<int> even;
    vector<int> odd;
    for(int i=0;i<n;i++) {
        if(arr[i]%2==0) even.push_back(arr[i]);
        else odd.push_back(arr[i]);
    }
    for (int i=0;i<even.size();i++) {
        cout<< even[i]<<" ";
    }
    cout<<endl;
    for (int i=0;i<odd.size();i++) {
        cout<< odd[i]<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    seperateOddEven(n, a);
    return 0;
}