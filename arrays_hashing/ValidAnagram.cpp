// Problem: Valid Anagram
// Platform: NeetCode
// Link: https://neetcode.io/problems/is-anagram?list=neetcode250
// Difficulty: Easy
// Category: Arrays & Hashing

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string& s, string& t) {

        // verificam intai lungimile string-urilor, daca s.size() != t.size() -> return false;
        if (s.size() != t.size()) {
            return false;
        }
        // initializam cu 0 un vector de frecventa pentru 'a-z'
        vector freq(26, 0);

        // iteram prin fiecare litera a cuvintelor si incrementam apoi decrementam vectorul de frecventa
        for (const auto ch : s) {
            freq[ch - 'a']++;
        }

        for (const auto ch : t) {
            freq[ch - 'a']--;
        }

        // daca la final toate elementele vectorului de frecventa sunt 0 -> anagram
        if (all_of(freq.begin(), freq.end(), [](const int i){return i==0;})) {
            return true;
        }
        return false;
    }
};
