#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Container With Most Water", "maxArea")
{
    Solution s;
    vector<int> example1 = {1,8,6,2,5,4,8,3,7};
    REQUIRE(s.maxArea(example1) == 49);
    vector<int> example2 = {1,1};
    REQUIRE(s.maxArea(example2) == 1);
    vector<int> example3 = {1,3,3,1};
    REQUIRE(s.maxArea(example3) == 3);
    vector<int> example4 = {1,2,4,3};
    REQUIRE(s.maxArea(example4) == 4);
}
