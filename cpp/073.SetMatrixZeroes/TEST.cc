#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Set Matrix Zeroes", "setZeroes") {
    Solution s;
    vector<vector<int>> input1 = {
        {1,1,1},
        {1,0,1},
        {1,1,1},
    };
    vector<vector<int>> output1 = {
        {1,0,1},
        {0,0,0},
        {1,0,1},
    };
    s.setZeroes(input1);
    REQUIRE(input1 == output1);

    vector<vector<int>> input2 = {
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5},
    };
    vector<vector<int>> output2 = {
        {0,0,0,0},
        {0,4,5,0},
        {0,3,1,0},
    };
    s.setZeroes(input2);
    REQUIRE(input2 == output2);
}
