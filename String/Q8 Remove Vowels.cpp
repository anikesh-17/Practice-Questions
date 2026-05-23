#include <iostream>
using namespace std;

int main() {
    string str = "anikesh";
    string result = "";

    for(char ch : str) {
        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
            result += ch;
    }

    cout << result;
}