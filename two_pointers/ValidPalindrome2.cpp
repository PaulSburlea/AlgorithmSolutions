// Problem: Valid Palindrome II
// Platform: NeetCode
// Link: https://neetcode.io/problems/valid-palindrome-ii?list=neetcode250
// Difficulty: Easy
// Category: Two Pointers

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // function to check if a substring is palindrome
    static bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    static bool validPalindrome(const string& s) {
        int l = 0;
        int r = static_cast<int>(s.size()-1);

        while (l < r) {
            if (s[l] != s[r]) {
                // call isPalindrome after deleting a letter to check if a palindrome is possible
                return isPalindrome(s, l+1, r) || isPalindrome(s, l, r-1);
            }
            l++;
            r--;
        }
        return true;
    }
};
