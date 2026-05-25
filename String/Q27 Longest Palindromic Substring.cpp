#include <iostream>
using namespace std;

bool isPalindrome(string s, int start, int end) {
    while(start < end) {
        if(s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    string str = "babad";
    string longest = "";

    for(int i=0; i<str.length(); i++) {
        for(int j=i; j<str.length(); j++) {

            if(isPalindrome(str, i, j)) {

                if((j-i+1) > longest.length()) {
                    longest = str.substr(i, j-i+1);
                }
            }
        }
    }

    cout << "Longest Palindrome: " << longest;
}