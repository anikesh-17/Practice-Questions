#include <bits/stdc++.h>
using namespace std;

bool palindrome(string str) {
    int n = str.length();
    string copy = str;
    for(int i=0;i<n/2;i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    if (copy == str) return true;
    return false;
}

int main() {
    string str;
    cin>>str;


    cout << (palindrome(str) ? "Yes" : "No") << endl;
}