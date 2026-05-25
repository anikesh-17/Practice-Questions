#include <iostream>
using namespace std;

int main() {
    string str = "wwwwaaadexxxxxx";
    string encoded = "";

    int count = 1;

    for(int i=0; i<str.length(); i++) {

        if(str[i] == str[i+1]) {
            count++;
        }
        else {
            encoded += str[i];
            encoded += to_string(count);
            count = 1;
        }
    }

    cout << encoded;
}