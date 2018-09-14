#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Plus One", "plusOne") {
    Solution s;
    vector<int> input1 = {1,2,3};
    vector<int> output1 = {1,2,4};
    REQUIRE(s.plusOne(input1) == output1);

    vector<int> input2 = {1,2,9};
    vector<int> output2 = {1,3,0};
    REQUIRE(s.plusOne(input2) == output2);

    vector<int> input3 = {1};
    vector<int> output3 = {2};
    REQUIRE(s.plusOne(input3) == output3);

    vector<int> input4 = {9,9};
    vector<int> output4 = {1,0,0};
    REQUIRE(s.plusOne(input4) == output4);
}
