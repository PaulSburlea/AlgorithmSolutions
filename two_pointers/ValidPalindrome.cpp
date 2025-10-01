// Problem: Valid Palindrome
// Platform: NeetCode
// Link: https://neetcode.io/problems/is-palindrome?list=neetcode250
// Difficulty: Easy
// Category: Two Pointers

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    static bool isPalindrome(const string& s) {

        // init two pointers
        int n = 0;
        int m = static_cast<int>(s.size())-1;

        while (n < m) {
            // check if characters are alphanumeric, if not, we jump to the next iteration
            if (!isalnum(s[n])) {
                n++;
                continue;
            }

            if (!isalnum(s[m])) {
                m--;
                continue;
            }

            // if the characters aren't equal, return false
            if (std::tolower(s[n]) != std::tolower(s[m]))
                return false;
            n++;
            m--;
        }
        return true;
    }
};
