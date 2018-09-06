#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Spiral Matrix", "spiralOrder") {
    Solution s;
    vector<vector<int>> input1 = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    vector<int> output1 = {1,2,3,6,9,8,7,4,5};
    REQUIRE(s.spiralOrder(input1) == output1);

    vector<vector<int>> input2 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12}
    };
    vector<int> output2 = {1,2,3,4,8,12,11,10,9,5,6,7};
    REQUIRE(s.spiralOrder(input2) == output2);

    vector<vector<int>> input3 = {
        {6,9,7}
    };
    vector<int> output3 = {6,9,7};
    REQUIRE(s.spiralOrder(input3) == output3);
}
