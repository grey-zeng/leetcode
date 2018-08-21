#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;


TEST_CASE("Search in Rotated Sorted Array", "search") {
    Solution s;
    vector<int> arr1 = {4,5,6,7,0,1,2};
    REQUIRE(s.search(arr1, 4) == 0);
    REQUIRE(s.search(arr1, 3) == -1);
    vector<int> arr2 = {};
    REQUIRE(s.search(arr2, 1) == -1);
    vector<int> arr3 = {1};
    REQUIRE(s.search(arr3, 1) == 0);
    REQUIRE(s.search(arr3, 2) == -1);
}
