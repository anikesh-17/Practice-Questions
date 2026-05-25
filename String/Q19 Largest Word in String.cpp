#include <iostream>
using namespace std;

int main() {
    string str = "I love competitive programming";

    string word = "", largest = "";

    for(int i=0; i<=str.length(); i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            if(word.length() > largest.length())
                largest = word;

            word = "";
        }
        else {
            word += str[i];
        }
    }

    cout << "Largest Word: " << largest;
}