#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Find Minimum in Rotated Sorted Array", "findMin") {
    Solution s;
    vector<int> input1 = {3,4,5,1,2};
    REQUIRE(s.findMin(input1) == 1);

    vector<int> input2 = {4,5,6,7,0,1,2};
    REQUIRE(s.findMin(input2) == 0);

    vector<int> input3 = {0,4,5,6,7};
    REQUIRE(s.findMin(input3) == 0);

    vector<int> input4 = {0,4};
    REQUIRE(s.findMin(input4) == 0);

    vector<int> input5 = {4,0};
    REQUIRE(s.findMin(input5) == 0);

    vector<int> input6 = {3,1,2};
    REQUIRE(s.findMin(input6) == 1);

    vector<int> input7 = {3,3,3,0,3};
    REQUIRE(s.findMin(input7) == 0);

    vector<int> input8 = {3,3,3,5,3};
    REQUIRE(s.findMin(input8) == 3);

    vector<int> input9 = {3,3};
    REQUIRE(s.findMin(input9) == 3);

    vector<int> input10 = {1,2,2,2,0,1,1};
    REQUIRE(s.findMin(input10) == 0);
}
