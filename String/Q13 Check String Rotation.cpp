#include <iostream>
using namespace std;

int main() {
    string s1 = "ABCD";
    string s2 = "CDAB";

    string temp = s1 + s1;

    if(temp.find(s2) != string::npos)
        cout << "Rotation";
    else
        cout << "Not Rotation";
}