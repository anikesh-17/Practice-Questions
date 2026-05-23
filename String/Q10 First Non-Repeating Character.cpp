#include <iostream>
using namespace std;

int main() {
    string str = "anikesh";

    for(int i=0; i<str.length(); i++) {
        int count = 0;

        for(int j=0; j<str.length(); j++) {
            if(str[i] == str[j])
                count++;
        }

        if(count == 1) {
            cout << "First Non-Repeating Character: " << str[i];
            break;
        }
    }
}