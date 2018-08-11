#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>

TEST_CASE("3Sum Closest", "3numCloset")
{
    Solution s;
    vector<int> example1 = {-1, 2, 1, -4};
    REQUIRE(s.threeSumClosest(example1, 1) == 2);
    vector<int> example2 = {0,0,0};
    REQUIRE(s.threeSumClosest(example2, 0) == 0);
    vector<int> example3 = {1,2,3};
    REQUIRE(s.threeSumClosest(example3, 0) == 6);
    vector<int> example4 = {1,1,1,0};
    REQUIRE(s.threeSumClosest(example4, 2) == 2);
    vector<int> example5 = {0,2,1,-3};
    REQUIRE(s.threeSumClosest(example5, 1) == 0);
}
