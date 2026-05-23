#include <iostream>
using namespace std;

int main() {
    string str = "ABCabc";

    for(char ch : str) {
        cout << ch << " = " << int(ch) << endl;
    }
}