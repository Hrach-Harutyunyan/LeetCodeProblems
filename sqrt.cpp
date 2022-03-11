/* Given a non-negative integer x, compute and return the square root of x.
Since the return type is an integer, the decimal digits are truncated, 
and only the integer part of the result is returned. */

#include <iostream>

int mySqrt(int); 

int main () {

    int a = 15;
    int b = 16;
    std::cout << mySqrt (a) << "\t";
    std::cout << mySqrt (b) << std::endl;

    return 0;
}

int mySqrt(int x) {
    if (x < 0) return -1;
    if (x == 0) return 0;

    int begin = 0;
    int end = x;
    int mid = -1;

    while (begin < end) {
        mid = (begin + end) / 2; 
        if (mid * mid == x) {
            return mid;
        }
        else if (mid * mid < x) {
            begin = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    for (int i = end-1; i <= begin; i++) {
        if (i * i > x) {
            return i - 1;
        }
    }
    return (begin + end) / 2;
}