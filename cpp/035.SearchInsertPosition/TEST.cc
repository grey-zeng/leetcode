#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Search Insert Position", "searchInsert") {
    Solution s;
    vector<int> arr1 = {1,3,5,6};
    REQUIRE(s.searchInsert(arr1, 5) == 2);
    REQUIRE(s.searchInsert(arr1, 2) == 1);
    REQUIRE(s.searchInsert(arr1, 7) == 4);
    REQUIRE(s.searchInsert(arr1, 0) == 0);

    vector<int> arr2 = {};
    REQUIRE(s.searchInsert(arr2, 0) == 0);
}
