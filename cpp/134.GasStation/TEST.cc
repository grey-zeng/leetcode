#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Gas Station", "canCompleteCircuit") {
    Solution s;
    vector<int> inputG1 = {1,2,3,4,5};
    vector<int> inputC1 = {3,4,5,1,2};
    REQUIRE(s.canCompleteCircuit(inputG1, inputC1) == 3);

    vector<int> inputG2 = {2,3,4};
    vector<int> inputC2 = {3,4,3};
    REQUIRE(s.canCompleteCircuit(inputG2, inputC2) == -1);

    vector<int> inputG3 = {3,1,1};
    vector<int> inputC3 = {1,2,2};
    REQUIRE(s.canCompleteCircuit(inputG3, inputC3) == 0);

    vector<int> inputG4 = {5,1,2,3,4};
    vector<int> inputC4 = {4,4,1,5,1};
    REQUIRE(s.canCompleteCircuit(inputG4, inputC4) == 4);
}
