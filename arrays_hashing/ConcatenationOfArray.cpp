#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    static vector<int> getConcatenation(vector<int>& nums) {

        vector<int> ans;

        // 2 iteratii pentru a da push_back elementelor din nums in ans de 2 ori
        for (int i=0; i<2; i++) {
            for (auto num : nums) {
                ans.push_back(num);
            }
        }

        return ans;

    }
};