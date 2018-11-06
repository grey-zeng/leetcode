#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Find Peak Element", "findPeakElement") {
    Solution s;
    vector<int> input1 = {1,2,3,1};
    REQUIRE(s.findPeakElement(input1) == 2);

    vector<int> input2 = {1,2,1,3,5,6,4};
    int res2 = s.findPeakElement(input2);
    REQUIRE(res2==1);
}
