#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Subsets II", "subsetsWithDup") {
    Solution s;
    vector<int> input1 = {1,2,2};
    REQUIRE(s.subsetsWithDup(input1).size() == 6);
}
