/* Given an array of integers nums which is sorted in ascending order,
and an integer target, write a function to search target in nums. 
If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity. */

#include <iostream>
#include <vector>

int binarySearch (std::vector<int>, int);\


int main () {
    std::vector <int> vec {-1,0,3,5,9,12};
    std::cout << binarySearch(vec,12);

    return 0;
}


int binarySearch (std::vector<int> nums, int target) {
    int begin = 0;
    int end = nums.size() - 1;
    int mid = begin + ((begin + end) / 2);
    
    if (begin > end) return -1;
    if (nums[mid] == target) return mid;
    
    while(begin <= end) {
        if(nums[mid] == target) return mid;
        else if (nums[mid] > target) {
            end = mid - 1 ;
        }else {
            begin = mid + 1;
        }
        mid = (begin + end) / 2; 
    }
    return -1;
}