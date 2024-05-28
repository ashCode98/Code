cmake_minimum_required(VERSION 3.28)
project(CP_and_DSA)

set(CMAKE_CXX_STANDARD 14)

add_executable(CP_and_DSA
        "Competitive programming/TLE Eleminators/C++ STL/one.cpp"
        DSA/Array/Medium/2149_rearrange_ele.cpp
        DSA/Array/Medium/31_next_permutation.cpp
        DSA/Array/Medium/75_sort_colors.cpp
        DSA/Array/Medium/sub_arrays.cpp
        "DSA/Binary Search/first_and_last_occur.cpp"
        "DSA/Binary Search/lower_bound.cpp"
        "DSA/Binary Search/recursive_binary_search.cpp"
        "DSA/Binary Search/single_element_sorted_array.cpp"
        DSA/Strings/151_reverse_words.cpp
        DSA/Strings/20_validness.cpp)
