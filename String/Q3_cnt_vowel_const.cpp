#include <bits/stdc++.h>
using namespace std;

int cntVowels(string str, int n) {
    int vowels = 0;
    for (int i = 0; i < str.length(); i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E') {
            vowels++;
        }
    }
    return vowels;
}

int main() {
    string str;
    cin >> str;
    int n = str.length();
    int vowels = cntVowels(str, n);
    int consonents = n - vowels;
    cout << "Consonants : " << consonents << endl;
    cout << "Vowels : " << vowels << endl;
}