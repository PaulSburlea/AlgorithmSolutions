// Problem: Two Sum
// Platform: NeetCode
// Link: https://neetcode.io/problems/two-integer-sum?list=neetcode250
// Difficulty: Easy
// Category: Arrays & Hashing

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    static vector<int> twoSum(vector<int>& nums, const int target) {
        // cream un map unde vom tine indecsii numerelor care se aduna ca a rezulte target
        unordered_map<int, int> pairs;

        // iteram prin toate elementele vectorului nums
        for (int i=0; i<nums.size(); i++) {

            // verificam daca complementul target  nums[i] exista in map, daca exista -> returnam perechea
            if (pairs.find(target - nums[i]) != pairs.end()) {
                return {pairs[target - nums[i]], i};
            }

            // daca nu exista, adaugam nums[i] i i in map
            pairs.insert({nums[i], i});
        }
        return {};
    }
};
