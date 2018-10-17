#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Triangle", "minimumTotal") {
    Solution s;
    vector<vector<int>> input1 = {
        {2},
        {3,4},
        {6,5,7},
        {4,1,8,3},
    };
    REQUIRE(s.minimumTotal(input1) == 11);

    vector<vector<int>> input2 = {
        {1},
    };
    REQUIRE(s.minimumTotal(input2) == 1);

    vector<vector<int>> input3 = {
        {2},
        {3,8},
        {8,9,1},
    };
    REQUIRE(s.minimumTotal(input3) == 11);
}
