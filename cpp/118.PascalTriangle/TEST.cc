#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Pascal's Triangle", "generate") {
    Solution s;
    vector<vector<int>> ouput1 = {
        {1},
        {1,1},
        {1,2,1},
        {1,3,3,1},
        {1,4,6,4,1},
    };
    REQUIRE(s.generate(5) == ouput1);

    vector<vector<int>> output2 = {
        {1},
    };
    REQUIRE(s.generate(1) == output2);
}
