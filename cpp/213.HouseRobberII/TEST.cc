#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("House Robber II", "rob") {
    Solution s;
    vector<int> input1 = {2,3,2};
    REQUIRE(s.rob(input1) == 3);

    vector<int> input2 = {1,2,3,1};
    REQUIRE(s.rob(input2) == 4);

    vector<int> input3 = {4,1,1,4};
    REQUIRE(s.rob(input3) == 5);

    vector<int> input4 = {10, 0, 0, 0, 5};
    REQUIRE(s.rob(input4) == 10);

    vector<int> input5 = {1, 2, 1, 1};
    REQUIRE(s.rob(input5) == 3);

    vector<int> input6 = {1, 7, 9, 2};
    REQUIRE(s.rob(input6) == 10);
}
