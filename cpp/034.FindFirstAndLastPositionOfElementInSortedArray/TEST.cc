#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Find First and Last Position of Element in Sorted Array", "search") {
    Solution s;
    vector<int> res0 = {-1,-1};

    vector<int> arr1 = {5,7,7,8,8,10};
    vector<int> res1 = {3,4};
    REQUIRE(s.searchRange(arr1, 8) == res1);
    REQUIRE(s.searchRange(arr1, 6) == res0);
    vector<int> arr2 = {10};
    vector<int> res2 = {0, 0};
    REQUIRE(s.searchRange(arr2, 10) == res2);
    vector<int> arr3 = {};
    REQUIRE(s.searchRange(arr3, 10) == res0);
}
