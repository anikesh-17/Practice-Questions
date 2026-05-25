#include <iostream>
using namespace std;

int main() {
    string str = "programming";

    for(int i=0; i<str.length(); i++) {
        int count = 1;

        if(str[i] == '0')
            continue;

        for(int j=i+1; j<str.length(); j++) {
            if(str[i] == str[j]) {
                count++;
                str[j] = '0';
            }
        }

        if(count > 1)
            cout << str[i] << endl;
    }
}