// Problem: Group Anagram
// Platform: NeetCode
// Link: https://neetcode.io/problems/anagram-groups?list=neetcode250
// Difficulty: Medium
// Category: Arrays & Hashing

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> groups;

        vector<int> freq(26, 0);
        for (const auto& word : strs) {
            for (auto ch : word) {
                freq[ch - 'a']++;
            }

            string key;
            for (const auto f : freq) {
                key += to_string(f) + "#";
            }
            groups[key].push_back(word);
            fill(freq.begin(), freq.end(), 0);
        }
        vector<vector<string>> result;
        for (const auto& val : groups) {
            result.push_back(val.second);
        }
        return result;
    }
};
