#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Combination Sum II", "combinationSum2") {
    Solution s;
    vector<int> example1 = {10,1,2,7,6,1,5};
    vector<vector<int>> res1 = {
        {1,7},
        {1,2,5},
        {2,6},
        {1,1,6}
    };
    REQUIRE(s.combinationSum2(example1, 8) == res1);
}
