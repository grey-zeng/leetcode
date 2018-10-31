#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Insertion Sort List", "insertionSortList") {
    Solution s;
    vector<int> inputVec1 = {3,2,1};
    ListNode* input1 = create(inputVec1);
    REQUIRE(s.insertionSortList(input1)->val == 1);
}
