#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Word Search", "exist") {
    Solution s;
    vector<vector<char>> input1 = {
        {'a', 'b', 'c', 'e'},
        {'s', 'f', 'c', 's'},
        {'a', 'd', 'e', 'e'},
    };
    REQUIRE(s.exist(input1, "abcced") == true);
    REQUIRE(s.exist(input1, "see") == true);
    REQUIRE(s.exist(input1, "abcb") == false);
}
