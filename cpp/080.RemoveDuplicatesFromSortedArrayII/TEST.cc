#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Remove Duplicates from Sorted Array II", "removeDuplicates") {
    Solution s;
    vector<int> input1 = {1,1,1,2,2,3};
    REQUIRE(s.removeDuplicates(input1) == 5);
    vector<int> input2 = {};
    REQUIRE(s.removeDuplicates(input2) == 0);
    vector<int> input3 = {0,0,1,1,1,1,2,3,3};
    REQUIRE(s.removeDuplicates(input3) == 7);
    vector<int> input4 = {0};
    REQUIRE(s.removeDuplicates(input4) == 1);
    vector<int> input5 = {1,2};
    REQUIRE(s.removeDuplicates(input5) == 2);
}
