// Problem: Merge Strings Alternately
// Platform: NeetCode
// Link: https://neetcode.io/problems/merge-strings-alternately?list=neetcode250
// Difficulty: Easy
// Category: Two Pointers

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    static string mergeAlternately(const string& word1, const string& word2) {
        string result;

        int p1 = 0;
        int p2 = 0;

        // we stop when we reach the finish of the longest string
        while (p1<word1.size() or p2 < word2.size()) {
            // check if we have letters left, populate alternately result string and increment pointers
            if (p1 < word1.size()) {
                result.push_back(word1[p1]);
            }
            if (p2 < word2.size()) {
                result.push_back(word2[p2]);
            }
            p1++;
            p2++;
        }
        return result;
    }
};
