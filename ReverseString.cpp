/* Write a function that reverses a string.
The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory. */

#include <iostream>
#include <vector>

void reverseString(std::vector<char>&);


int main() {
    std::vector <char> vec{'h', 'e', 'l', 'l', 'o'};
    reverseString(vec);
    for (auto el : vec) {
        std::cout << el << " ";
    }

    return 0;
}


void reverseString(std::vector<char>& s) {
    if (s.size() > 1) {
        for (int i{}; i < s.size()/2; ++i) {
            std::swap(s[i], s[s.size()-i-1]);
        }
    }
}  