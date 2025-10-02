cmake_minimum_required(VERSION 3.30)
project(AlgorithmSolutions)

set(CMAKE_CXX_STANDARD 17)

add_executable(AlgorithmSolutions arrays_hashing/ConcatenationOfArray.cpp
        arrays_hashing/ContainsDuplicate.cpp
        arrays_hashing/ValidAnagram.cpp
        arrays_hashing/TwoSum.cpp
        arrays_hashing/LongestCommonPrefix.cpp
        "arrays_hashing/Group Anagram.cpp"
        arrays_hashing/TopKFrequentElements.cpp
        arrays_hashing/RemoveElement.cpp
        arrays_hashing/MajorityElement.cpp
        arrays_hashing/DesignHashset.cpp
        arrays_hashing/DesignHashMap.cpp
        two_pointers/ReverseString.cpp
        two_pointers/ValidPalindrome.cpp
        two_pointers/ValidPalindrome2.cpp
        two_pointers/MergeStringsAlternately.cpp)
