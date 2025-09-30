#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    static int removeElement(vector<int>& nums, const int val) {
        // using k to track index
        int k = 0;

        for (int i=0; i<nums.size(); i++) {
            // if the current element is not equal to val, we'll keep it
            if (nums[i] != val) {
                // move the valid element to the position k
                nums[k] = nums[i];
                // increment k to prepare for the next valid element
                k++;
            }
        }
        return k;
    }
};
