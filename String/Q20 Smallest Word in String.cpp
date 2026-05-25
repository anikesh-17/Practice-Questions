#include <iostream>
using namespace std;

int main() {
    string str = "I love competitive programming";

    string word = "", smallest = "";

    int first = 1;

    for(int i=0; i<=str.length(); i++) {
        if(str[i] == ' ' || str[i] == '\0') {

            if(first || word.length() < smallest.length()) {
                smallest = word;
                first = 0;
            }

            word = "";
        }
        else {
            word += str[i];
        }
    }

    cout << "Smallest Word: " << smallest;
}