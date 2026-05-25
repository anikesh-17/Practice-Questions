#include <iostream>
using namespace std;

int main() {
    string str = "I love coding";
    string word = "";

    for(int i=0; i<=str.length(); i++) {

        if(str[i] == ' ' || str[i] == '\0') {

            for(int j=word.length()-1; j>=0; j--)
                cout << word[j];

            cout << " ";
            word = "";
        }
        else {
            word += str[i];
        }
    }
}