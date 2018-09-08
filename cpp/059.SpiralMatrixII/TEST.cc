#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Spiral Matrix II", "generateMatrix") {
    Solution s;
    vector<vector<int>> res1 = {
        {1,2,3},
        {8,9,4},
        {7,6,5},
    };
    REQUIRE(s.generateMatrix(3) == res1);
}
