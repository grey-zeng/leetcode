#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Permutations II", "permuteUnique") {
    Solution s;
    vector<int> input1 = {1,1,2};
    vector<vector<int>> res1 = {
        {1,1,2},
        {1,2,1},
        {2,1,1}
    };
    REQUIRE(s.permuteUnique(input1) == res1);
    vector<int> input2 = {1,1,1};
    vector<vector<int>> res2 = {
        {1,1,1}
    };
    REQUIRE(s.permuteUnique(input2) == res2);
    vector<int> input3 = {2,2,1,1};
    vector<vector<int>> res3 = {
        {1,1,2,2},
        {1,2,1,2},
        {1,2,2,1},
        {2,1,1,2},
        {2,1,2,1},
        {2,2,1,1},
    };
    REQUIRE(s.permuteUnique(input3) == res3);
}
