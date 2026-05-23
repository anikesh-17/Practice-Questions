#include <iostream>
using namespace std;

int main() {
    string str = "Anikesh Sharma";
    string result = "";

    for(char ch : str) {
        if(ch != ' ')
            result += ch;
    }

    cout << result;
}