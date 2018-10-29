#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Linked List Cycle II", "detectCycle") {
    Solution s;
    vector<int> inputList1 = {1,2};
    ListNode* input1 = create(inputList1);
    input1->next->next = input1;
    REQUIRE(s.detectCycle(input1) == input1);

    vector<int> inputList2 = {1};
    ListNode* input2 = create(inputList2);
    input2->next = input2;
    REQUIRE(s.detectCycle(input2) == input2);

    vector<int> inputList3 = {1,2,3,4};
    ListNode* input3 = create(inputList3);
    input3->next->next->next->next = input3->next;
    REQUIRE(s.detectCycle(input3) == input3->next);
}
