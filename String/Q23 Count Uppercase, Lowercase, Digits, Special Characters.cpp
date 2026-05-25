#include <iostream>
using namespace std;

int main() {
    string str = "Hello@123";

    int upper=0, lower=0, digit=0, special=0;

    for(char ch : str) {

        if(ch >= 'A' && ch <= 'Z')
            upper++;

        else if(ch >= 'a' && ch <= 'z')
            lower++;

        else if(ch >= '0' && ch <= '9')
            digit++;

        else
            special++;
    }

    cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower << endl;
    cout << "Digits: " << digit << endl;
    cout << "Special Characters: " << special;
}