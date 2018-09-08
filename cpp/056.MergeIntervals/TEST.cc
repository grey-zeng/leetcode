#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Merge Intervals", "merge") {
    Solution s;
    vector<Interval> input1 = {
        {1,3},
        {2,6},
        {8,10},
        {15,18},
    };
    vector<Interval> res1 = {
        {1,6},
        {8,10},
        {15,18},
    };
    REQUIRE(s.merge(input1) == res1);
}
