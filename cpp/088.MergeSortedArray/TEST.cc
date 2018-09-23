#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Merge Sorted Array", "merge") {
    Solution s;
    vector<int> input11 = {1,2,3,0,0,0};
    vector<int> input12 = {2,5,6};
    vector<int> output1 = {1,2,2,3,5,6};
    s.merge(input11, 3, input12, 3);
    REQUIRE(input11 == output1);

    vector<int> input21 = {0,0,0};
    vector<int> input22 = {1,2,3};
    vector<int> output2 = {1,2,3};
    s.merge(input21, 0, input22, 3);
    REQUIRE(input21 == output2);
}
