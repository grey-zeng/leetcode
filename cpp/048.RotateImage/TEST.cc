#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Rotate Image", "rotate") {
    Solution s;
    vector<vector<int>> input1 = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    vector<vector<int>> res1 = {
        {7,4,1},
        {8,5,2},
        {9,6,3},
    };
    s.rotate(input1);
    REQUIRE(input1 == res1);
}
