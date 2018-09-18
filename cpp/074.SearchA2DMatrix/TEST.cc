#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Search a 2D Matrix", "searchMatrix") {
    Solution s;
    vector<vector<int>> input1 = {
        {1,3,5,7},
        {10, 11, 16, 20},
        {23, 30, 34, 50},
    };
    REQUIRE(s.searchMatrix(input1, 3) == true);
    REQUIRE(s.searchMatrix(input1, 13) == false);

    vector<vector<int>> input2 = {{1}};
    REQUIRE(s.searchMatrix(input2, 1) == true);

    vector<vector<int>> input3 = {
        {1},
        {3}
    };
    REQUIRE(s.searchMatrix(input3, 1) == true);
}
