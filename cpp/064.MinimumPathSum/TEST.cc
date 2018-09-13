#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Minimum Path Sum", "minPathSum") {
    Solution s;
    vector<vector<int>> input1 = {
        {1,3,1},
        {1,5,1},
        {4,2,1},
    };
    REQUIRE(s.minPathSum(input1) == 7);

    vector<vector<int>> input2 = {{1}};
    REQUIRE(s.minPathSum(input2) == 1);

    vector<vector<int>> input3 = {{}};
    REQUIRE(s.minPathSum(input3) == 0);

    vector<vector<int>> input4 = {
        {0,1,1},
        {0,0,0},
    };
    REQUIRE(s.minPathSum(input4) == 0);
}
