#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Simplify Path", "simplifyPath") {
    Solution s;
    REQUIRE(s.simplifyPath("/home") == "/home");
    REQUIRE(s.simplifyPath("/a/./b/../../c/") == "/c");
    REQUIRE(s.simplifyPath("/a/../../b/../c//.//") == "/c");
    REQUIRE(s.simplifyPath("/a//b////c/d//././/..") == "/a/b/c");
}
