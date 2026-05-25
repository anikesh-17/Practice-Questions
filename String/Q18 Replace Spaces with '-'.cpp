#include <iostream>
using namespace std;

int main() {
    string str = "I love coding";

    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ')
            str[i] = '-';
    }

    cout << str;
}