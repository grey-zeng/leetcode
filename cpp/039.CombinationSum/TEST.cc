#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Combination Sum", "combinationSum") {
    Solution s;
    vector<int> arr1 = {2,3,6,7};
    vector<int> arr2 = {2,3,5};
    vector<int> arr3 = {4};
    vector<int> arr4 = {1};
    vector<int> arr5 = {};

    vector<vector<int>> res1 = {
        {7},
        {2,2,3}
    };
    REQUIRE(s.combinationSum(arr1, 7) == res1);
    
    vector<vector<int>> res2 = {
        {2,2,2,2},
        {2,3,3},
        {3,5}
    };
    REQUIRE(s.combinationSum(arr2, 8) == res2);
}
