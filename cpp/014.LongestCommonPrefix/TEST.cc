#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
#include <string>
using namespace std;


TEST_CASE("Longest Common Prefix", "longestCommonPrefix")
{
    Solution s;
    vector<string> example0 = {};
    REQUIRE(s.longestCommonPrefix(example0) == "");
    vector<string> example1 = {"aaa", "aaa"};
    REQUIRE(s.longestCommonPrefix(example1) == "aaa");
    vector<string> example2 = {"flower","flow","flight"};
    REQUIRE(s.longestCommonPrefix(example2) == "fl");
    vector<string> example3 = {"dog","racecar","car"};
    REQUIRE(s.longestCommonPrefix(example3) == "");
    vector<string> example4 = {"dog","racecar","car"};
    REQUIRE(s.longestCommonPrefix(example4) == "");
    vector<string> example5 = {"aaa"}; 
    REQUIRE(s.longestCommonPrefix(example5) == "aaa");
}
