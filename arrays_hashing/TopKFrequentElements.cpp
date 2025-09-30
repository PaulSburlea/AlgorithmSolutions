// Problem: Top K Frequent Elements
// Platform: NeetCode
// Link: https://neetcode.io/problems/top-k-elements-in-list?list=neetcode250
// Difficulty: Medium
// Category: Arrays & Hashing

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(const vector<int>& nums, const int k) {

        unordered_map<int, int> freq;
        for (const auto x : nums) {
            freq[x]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        for (auto [num, count] : freq) {
            if (pq.size() < k) {
                pq.emplace(count, num);
            }

            else if (pq.size() == k) {
                if (count > pq.top().first) {
                    pq.pop();
                    pq.emplace(count, num);
                }
            }
        }
        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};
