// Problem: Contains Duplicate
// Platform: NeetCode
// Link: https://neetcode.io/problems/duplicate-integer?list=neetcode250
// Difficulty: Easy
// Category: Arrays & Hashing

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // folosim unordered_set pentru a retine unique values
        unordered_set<int> seen;

        // iteram prin vectorul nums
        for (const auto num : nums) {
            // verificam existenta elemntului curent si daca deja exista returnam true
            if (seen.count(num)) {
                return true;
            }
            // adaugam elementul in set
            seen.insert(num);
        }

        // returnam false daca nu exista duplicate
        return false;
    }
};
