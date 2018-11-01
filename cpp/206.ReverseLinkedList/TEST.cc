#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Reverse Linked List", "reverseList") {
    Solution s;
    vector<int> inputVec1 = {1,2};
    ListNode* input1 = create(inputVec1);
    REQUIRE(s.reverseList(input1)->val == 2);
}
