/* Given an integer array nums, return true if any value appears at least
twice in the array, and return false if every element is distinct. */

#include <iostream>
#include <unordered_set>
#include <vector>

bool containsDuplicate (std::vector<int>& nums);

int main () {



    return 0;
}


bool containsDuplicate (std::vector<int>& nums) {
    std::unordered_set<int> unset;
    for(auto elem : nums){
        unset.insert(elem);
    }
    return !(unset.size()==nums.size());
}