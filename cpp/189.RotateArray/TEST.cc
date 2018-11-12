#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Rotate Array", "rotate") {
    Solution s;
    vector<int> input1 = {1,2,3,4,5,6,7};
    vector<int> res1 = {5,6,7,1,2,3,4};
    s.rotate(input1, 3); 
    REQUIRE(input1 == res1);

    vector<int> input2 = {1,2,3,4,5,6,7};
    vector<int> res2 = {7,1,2,3,4,5,6};
    s.rotate(input2, 1); 
    REQUIRE(input2 == res2);

    vector<int> input3 = {1,2};
    vector<int> res3 = {1,2};
    s.rotate(input3, 2);
    REQUIRE(input3 == res3);
}
