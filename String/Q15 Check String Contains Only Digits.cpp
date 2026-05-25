#include <iostream>
using namespace std;

int main() {
    string str = "12345";
    bool flag = true;

    for(char ch : str) {
        if(ch < '0' || ch > '9') {
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "Only Digits";
    else
        cout << "Contains Other Characters";
}