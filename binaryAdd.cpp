/* Given two binary strings a and b,return their sum as a binary string. */

#include <iostream>
#include <string>

using std::string;

string addBinary(string, string);

int main() {
    string a = "11";
    string b = "1";
    std::cout << addBinary(a,b);

    return 0;
}

string addBinary(string a, string b) {
    string result;
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    while (i >= 0 || j >= 0) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i--] - '0';
        }
        if (j >= 0) {
            sum += b[j--] - '0';
        }
        carry = sum > 1 ? 1 : 0;
        result = std::to_string(sum % 2) + result;
    }
    if(carry) {
        result = std::to_string(carry) + result;
    }
    return result;
};