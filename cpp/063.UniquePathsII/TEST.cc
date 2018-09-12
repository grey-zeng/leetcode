#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Unique Paths II", "uniquePathsWithObstacles") {
    Solution s;
    vector<vector<int>> input1 = {
        {0,0,0},
        {0,1,0},
        {0,0,0},
    };
    REQUIRE(s.uniquePathsWithObstacles(input1) == 2);

    vector<vector<int>> input2 = {
        {0,0},
        {1,0},
    };
    REQUIRE(s.uniquePathsWithObstacles(input2) == 1);

    vector<vector<int>> input3 = {{1}};
    REQUIRE(s.uniquePathsWithObstacles(input3) == 0);

    vector<vector<int>> input4 = {
        {1,0},
        {0,0},
    };
    REQUIRE(s.uniquePathsWithObstacles(input4) == 0);

    vector<vector<int>> input5 = {
        {0,0},
        {0,1},
    };
    REQUIRE(s.uniquePathsWithObstacles(input5) == 0);

}
