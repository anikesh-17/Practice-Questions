#include <bits/stdc++.h>
using namespace std;

void odd_even(vector<int> vec, int n) {
    int even = 0, odd = 0;
    for(int i=0;i<n;i++) {
        if(vec[i]%2==0) {
            even++;
        }
        else {
            odd++;
        }
    }
    cout<<"even : "<< even <<endl;
    cout<<"odd : " << odd <<endl;
}

int main() {
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) {
        cin>>vec[i];
    }
    odd_even(vec,n);
    return 0;
}