// Problem: Design HashMap
// Platform: NeetCode
// Link: https://neetcode.io/problems/design-hashmap?list=neetcode250
// Difficulty: Easy
// Category: Arrays & Hashing

#include <vector>

using namespace std;

class MyHashMap {
private:
    vector<int> map;

public:
    // init a vector of size 1,000,001 with -1
    MyHashMap() : map(1000001, -1) {}

    // put value to index key
    void put(const int key, const int value) {
        map[key] = value;
    }

    // return value from index key
    [[nodiscard]] int get(const int key) const {
        return map[key];
    }

    // change value of index key to -1
    void remove(const int key) {
        map[key] = -1;
    }
};
