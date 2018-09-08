#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("canJump", "canJump") {
    Solution s;
    vector<int> input1 = {2,3,1,1,4};
    REQUIRE(s.canJump(input1) == true );

    vector<int> input2 = {3,2,1,0,4};
    REQUIRE(s.canJump(input2) == false );

    vector<int> input3 = {};
    REQUIRE(s.canJump(input3) == true );
}
