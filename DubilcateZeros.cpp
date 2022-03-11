/* Given a fixed-length integer array arr, duplicate each occurrence of zero,
shifting the remaining elements to the right.

Note. that elements beyond the length of the original array are not written.
Do the above modifications to the input array in place and do not return anything. */

#include <iostream>
#include <vector>

void duplicateZeros(std::vector<int>&); //  1-st solution:
void duplicateZero(std::vector<int>&);  //  2-rd solution:


int main() {




    return 0;
}


void duplicateZeros(std::vector<int>& arr) {    // 1-st.
    int size = arr.size();
    
    for(int i{}; i < size; ++i) {
        if (arr[i] == 0) {
            arr.erase (arr.begin() + size - 1);
            arr.insert (arr.begin() + i, 0);
            ++i;
        }
    }
}

void duplicateZero(std::vector<int>& arr) {        // 2-rd.
    for (int i{}; i < arr.size(); ++i) {
        if (arr[i] == 0 && i < arr.size() - 1) {
            int j = arr.size() - 1;
            arr[j] = 0;
            while (j != i + 1) {
                std::swap (arr[j], arr[j-1]);
                --j;
            }
            ++i;
        }
    }
}