#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("House Robber", "rob") {
    Solution s;
    vector<int> input1 = {1,2,3,1};
    REQUIRE(s.rob(input1) == 4);

    vector<int> input2 = {2,7,9,3,1};
    REQUIRE(s.rob(input2) == 12);

    vector<int> input3 = {1,3};
    REQUIRE(s.rob(input3) == 3);

    vector<int> input4 = {2,1,1,3};
    REQUIRE(s.rob(input4) == 5);
}
