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
        arrays_hashing/DesignHashset.cpp)
