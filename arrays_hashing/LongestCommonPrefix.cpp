// Problem: Longest Common Prefix
// Platform: NeetCode
// Link: https://neetcode.io/problems/longest-common-prefix?list=neetcode250
// Difficulty: Easy
// Category: Arrays & Hashing

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    static string longestCommonPrefix(const vector<string>& strs) {
        // luam primul cuvant din lista ca prefix
        string prefix = strs[0];

        // iteram prin toate cuvintele listei incepand cu al doilea cuvant din lista
        for (int i=1; i<strs.size(); i++) {
            // folosim o variabila 'word' pentru a tine cuvantul curent
            const string& word = strs[i];

            // cat timp j este mai mic decat [prefix SI word] si 'prefix[j] == word[j]' incrementam 'j'
            // la fiecare cuvant se va verifica ce litere sunt la fel si in j vom avea numarul de litere identice
            int j = 0;
            while (j < prefix.size() && j < word.size() && prefix[j] == word[j]) {
                j++;
            }

            // punem in prefix subsirul care contine literele din prefix pana la index-ul j, aceste este prefixul cuvintelor din lista
            prefix = prefix.substr(0, j);

            // daca prefix este gol returnam unstring gol ""
            if (prefix.empty()) {
                return "";
            }
        }
        // returnam prefixul obtinut
        return prefix;
    }
};
