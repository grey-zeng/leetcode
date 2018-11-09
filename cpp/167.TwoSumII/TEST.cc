#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Two Sum II - Input array is sorted", "twoSum") {
    Solution s;

    vector<int> input1 = {2,7,11,15};
    vector<int> res1 = {1,2};
    REQUIRE(s.twoSum(input1, 9) == res1);

    vector<int> input2 = {1,2,3,4,4,9,56,90};
    vector<int> res2 = {4,5};
    REQUIRE(s.twoSum(input2, 8) == res2);
}
