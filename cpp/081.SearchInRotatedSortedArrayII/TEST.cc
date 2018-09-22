#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Search in Rotated Sorted Array II", "search") {
    Solution s;
    vector<int> input1 = {2,5,6,0,0,1,2};
    REQUIRE(s.search(input1, 0) == true);
    REQUIRE(s.search(input1, 3) == false);
    vector<int> input2 = {0,0,0,0,1,2,0,0,0};
    REQUIRE(s.search(input2, 2) == true);
    REQUIRE(s.search(input2, 0) == true);
    REQUIRE(s.search(input2, 3) == false);
    vector<int> input3 = {};
    REQUIRE(s.search(input3, 0) == false);
}
