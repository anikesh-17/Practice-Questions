#include <iostream>
using namespace std;

int main() {
    string str = "abc";

    for(int i=0; i<str.length(); i++) {

        for(int j=i; j<str.length(); j++) {

            for(int k=i; k<=j; k++) {
                cout << str[k];
            }

            cout << endl;
        }
    }
}