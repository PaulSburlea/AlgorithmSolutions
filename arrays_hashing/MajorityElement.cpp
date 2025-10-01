// Problem: Majority Element
// Platform: NeetCode
// Link: https://neetcode.io/problems/majority-element?list=neetcode250
// Difficulty: Easy
// Category: Arrays & Hashing

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // using Boyer-Moore Voting algorithm
    static int majorityElement(const vector<int>& nums) {
        // we assume first element as our candidate and set counter to 1
        int candidate = nums[0];
        int counter = 1;

        // iterate across vector starting from second element
        for (int i=1; i<nums.size(); i++) {
            // if current element equals candidate, increment counter
            if (nums[i] == candidate)
                counter++;
            // if not, decrement count
            else
                counter--;

            // if counter is 0, we choose another candidate, nums[i+1]
            if (counter == 0)
                candidate = nums[i+1];
        }

        return candidate;
    }

    // non elegant solution, O(n+m)
    /*
    int majorityElement(const vector<int>& nums) {

        const auto n = nums.size()/2;
        const int maxim = *max_element(nums.begin(), nums.end());

        vector<int> freq(maxim+1, 0);
        for (const auto x : nums) {
            freq[x]++;
        }

        for (int i=0; i<freq.size(); i++) {
            if (freq[i] > n) {
                return i;
            }
        }

        return -1;
    }
    */
};
