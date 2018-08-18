#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Implement strStr()", "strstr") {
    Solution s;
    REQUIRE(s.strStr("hello", "ll") == 2);
    REQUIRE(s.strStr("aaaaa", "bbba") == -1);
    REQUIRE(s.strStr("aaaaa", "bbba") == -1);
    REQUIRE(s.strStr("", "bbba") == -1);
    REQUIRE(s.strStr("", "") == 0);
    REQUIRE(s.strStr("aa", "aaaa") == -1);
}
