#include <bits/stdc++.h>
using namespace std;

bool palindrome(string str) {
    int n = str.length();
    int left = 0, right = n - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string str;
    cin >> str;

    cout << (palindrome(str) ? "yes" : "no") << endl;

}