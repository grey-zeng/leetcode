#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;


TEST_CASE("Remove Element", "removeElement") {
    Solution s;
    vector<int> nums1 = {3,2,2,3};
    REQUIRE(s.removeElement(nums1, 2) == 2);
}
