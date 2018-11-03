#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.cc"

TEST_CASE("Min Stack", "MinStack") {
    MinStack minStack = new MinStack();
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    REQUIRE(minStack.getMin() == -3);
    minStack.pop();
    REQUIRE(minStack.top() == 0);
    REQUIRE(minStack.getMin() == -2);
}
