#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Majority Element II", "majorityElement") {
    Solution s;
    vector<int> input1 = {3,2,3};
    vector<int> res1 = {3};
    REQUIRE(s.majorityElement(input1) == res1);
    
    vector<int> input2 = {1,1,1,3,3,2,2,2};
    vector<int> res2 = {1,2};
    REQUIRE(s.majorityElement(input2) == res2);
}
