// Problem: Merge Sorted Array
// Platform: NeetCode
// Link: https://neetcode.io/problems/merge-sorted-array?list=neetcode250
// Difficulty: Easy
// Category: Two Pointers

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    void merge(vector<int>& nums1, const int m, const vector<int>& nums2, const int n) {
        int p1 = m-1; // last valid element in nums1
        int p2 = n-1; // last elemnt in nums2
        int p = m+n-1; // last position in nums1

        while (p1 >= 0 and p2 >= 0) {
            // check which element is greater and merge in reverse order
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }
        // fill nums1 with leftover nums2 elements
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
    }

    // not the usual solution, but kinda works
    /*void merge(vector<int>& nums1, int m, const vector<int>& nums2, int n) {

        int size = static_cast<int>(nums1.size())-1;
        while (n) {
            if (nums1[size] == 0) {
                nums1[size] = nums2[n-1];
            }
            size--;
            n--;
        }
        sort(nums1.begin(), nums1.end());
    }*/
};