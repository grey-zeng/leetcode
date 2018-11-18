#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Number of Islands", "numIslands") {
    Solution s;
    vector<vector<char>> input1 = {
        {'1','1','1','1','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'},
    };
    REQUIRE(s.numIslands(input1) == 1);


    vector<vector<char>> input2 = {
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'},
    };
    REQUIRE(s.numIslands(input2) == 3);
}
