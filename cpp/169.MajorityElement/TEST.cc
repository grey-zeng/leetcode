#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Majority Element", "majorityElement") {
    Solution s;
    vector<int> input1 = {3,2,3};
    REQUIRE(s.majorityElement(input1) == 3);

    vector<int> input2 = {2,2,1,1,1,2,2};
    REQUIRE(s.majorityElement(input2) == 2);
}
