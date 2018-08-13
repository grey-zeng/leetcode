#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;


TEST_CASE("4 Sum", "4sum")
{
    Solution s;
    vector<int> example1 = {1, 0, -1, 0, -2, 2};
    vector<vector<int>> res1 = {
        {-2, -1, 1, 2},
        {-2,  0, 0, 2},
        {-1,  0, 0, 1}
    };
    REQUIRE(s.fourSum(example1, 0) == res1);
    vector<int> example2 = {-1,0,-5,-2,-2,-4,0,1,-2};
    vector<vector<int>> res2 = {
        {-5,-4,-1,1},
        {-5,-4,0,0},
        {-5,-2,-2,0},
        {-4,-2,-2,-1},
    };
    REQUIRE(s.fourSum(example2, -9) == res2);
}
