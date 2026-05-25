#include <iostream>
using namespace std;

int main() {
    string str = "programming";

    for(int i=0; i<str.length(); i++) {
        for(int j=i+1; j<str.length(); j++) {
            if(str[i] == str[j]) {
                cout << "First Repeating Character: " << str[i];
                return 0;
            }
        }
    }
}