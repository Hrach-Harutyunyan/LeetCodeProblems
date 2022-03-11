/* Given a string s, return the string after replacing every
uppercase letter with the same lowercase letter */

#include <iostream>

using std::string;

string toLowerCase(string);

int main() {




    return 0;
}

string toLowerCase(string s) {
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    return s;
}