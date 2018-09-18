#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Sort Colors", "sortColors") {
    Solution s;
    vector<int> input1 = {2,0,2,1,1,0};
    vector<int> output1 = {0,0,1,1,2,2};
    s.sortColors(input1);
    REQUIRE(input1 == output1);
}
