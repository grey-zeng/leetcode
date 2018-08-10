#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;


TEST_CASE("3Sum", "3sum")
{
    Solution s;
    vector<int> example1 = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res1 = {
        {-1, -1, 2},
        {-1, 0, 1}
    };
    REQUIRE(s.threeSum(example1) == res1);
    vector<int> example2 = {};
    vector<vector<int>> res2 = {};
    REQUIRE(s.threeSum(example2) == res2);
    vector<int> example3 = {0,0,0};
    vector<vector<int>> res3 = {{0,0,0}};
    REQUIRE(s.threeSum(example3) == res3);
    vector<int> example4 = {0,0,0,0};
    vector<vector<int>> res4 = {{0,0,0}};
    REQUIRE(s.threeSum(example4) == res4);

}
