#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Palindrome Linked List", "isPalindrome") {
    Solution s;
    vector<int> inputVec1 = {1,2};
    ListNode* input1 = create(inputVec1);
    REQUIRE(s.isPalindrome(input1) == false);

    vector<int> inputVec2 = {1,2,2,1};
    ListNode* input2 = create(inputVec2);
    REQUIRE(s.isPalindrome(input2) == true);

    vector<int> inputVec3 = {1,2,3,2,1};
    ListNode* input3 = create(inputVec3);
    REQUIRE(s.isPalindrome(input3) == true);
}
