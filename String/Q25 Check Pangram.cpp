#include <iostream>
using namespace std;

int main() {
    string str = "thequickbrownfoxjumpsoverthelazydog";

    int freq[26] = {0};

    for(char ch : str) {
        if(ch >= 'a' && ch <= 'z')
            freq[ch-'a']++;
    }

    bool flag = true;

    for(int i=0; i<26; i++) {
        if(freq[i] == 0) {
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "Pangram";
    else
        cout << "Not Pangram";
}