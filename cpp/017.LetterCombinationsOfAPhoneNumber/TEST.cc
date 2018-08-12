#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Letter Combinations of a Phone Number", "permutation and combination")
{
    Solution s;
    vector<string> res1 = {"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"};
    REQUIRE(s.letterCombinations("23") == res1);
    vector<string> res2 = {};
    REQUIRE(s.letterCombinations("") == res2);
    vector<string> res3 = {"aa", "ab", "ac", "ba", "bb", "bc", "ca", "cb", "cc"};
    REQUIRE(s.letterCombinations("22") == res3);
}
