#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Surrounded Regions", "solve") {
    Solution s;
    vector<vector<char>> input1 = {
        {'X','X','X','X'},
        {'X','O','O','X'},
        {'X','X','O','X'},
        {'X','O','X','X'},
    };
    vector<vector<char>> output1 = {
        {'X','X','X','X'},
        {'X','X','X','X'},
        {'X','X','X','X'},
        {'X','O','X','X'},
    };
    s.solve(input1);
    REQUIRE(input1 == output1);
}
