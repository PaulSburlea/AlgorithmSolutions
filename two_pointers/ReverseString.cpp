// Problem: Reverse String
// Platform: NeetCode
// Link: https://neetcode.io/problems/reverse-string?list=neetcode250
// Difficulty: Easy
// Category: Two Pointers

#include <vector>
using namespace std;

class Solution {
public:
    static void reverseString(vector<char>& s) {
        // init two pointers with first and last index
        int n = 0;
        int m = static_cast<int>(s.size())-1;

        // while n < m, we swap the characters from vector, increment n and decrement m
        while (n < m) {
            swap(s[n], s[m]);
            n++;
            m--;
        }
    }
};
