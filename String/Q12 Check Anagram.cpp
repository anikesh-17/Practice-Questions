#include <iostream>
using namespace std;

int main() {
    string s1 = "listen";
    string s2 = "silent";

    int freq1[26] = {0};
    int freq2[26] = {0};

    for(char ch : s1)
        freq1[ch-'a']++;

    for(char ch : s2)
        freq2[ch-'a']++;

    bool flag = true;

    for(int i=0; i<26; i++) {
        if(freq1[i] != freq2[i]) {
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "Anagram";
    else
        cout << "Not Anagram";
}