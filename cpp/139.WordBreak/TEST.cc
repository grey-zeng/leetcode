#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Word Break", "wordBreak") {
    Solution s;
    vector<string> input1 = {"leet", "code"};
    REQUIRE(s.wordBreak("leetcode", input1) == TRUE);

    vector<string> input2 = {"apple", "pen"};
    REQUIRE(s.wordBreak("applepenapple", input2) == TRUE);

    vector<string> input3 = {"cats", "dog", "sand", "and", "cat"};
    REQUIRE(s.wordBreak("catsandog", input3) == FALSE);

    vector<string> input4 = {"app", "apple"};
    REQUIRE(s.wordBreak("apple", input4) == TRUE);

    vector<string> input5 = {"aab", "bbb", "aa"};
    REQUIRE(s.wordBreak("aabbb", input5) == TRUE);
}
