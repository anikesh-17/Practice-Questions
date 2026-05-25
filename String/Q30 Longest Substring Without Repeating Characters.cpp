#include <iostream>
using namespace std;

int main() {
    string str = "abcabcbb";

    int maxLen = 0;

    for(int i=0; i<str.length(); i++) {

        int visited[256] = {0};
        int len = 0;

        for(int j=i; j<str.length(); j++) {

            if(visited[str[j]] == 1)
                break;

            visited[str[j]] = 1;
            len++;

            if(len > maxLen)
                maxLen = len;
        }
    }

    cout << "Longest Length: " << maxLen;
}