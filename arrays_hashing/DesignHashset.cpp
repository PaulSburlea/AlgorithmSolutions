// Problem: Design Hashset
// Platform: NeetCode
// Link: https://neetcode.io/problems/design-hashset?list=neetcode250
// Difficulty: Easy
// Category: Arrays & Hashing

#include <vector>

using namespace std;

class MyHashSet {
private:
    // declare a vector of bools
    vector<bool> nums;

public:
    // init vector for 1,000,000 elements with value false
    MyHashSet() : nums(1000001, false) {}

    // to "add" a key, we change the value of the index (key=index) to true
    void add(const int key) {
        nums[key] = true;
    }

    // to "remove" a key, we change the value of the index (key=index) to false
    void remove(const int key) {
        nums[key] = false;
    }

    // we return either true or false if the key exists
    bool contains(const int key) {
        return nums[key];
    }
};