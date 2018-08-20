#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
using namespace std;

TEST_CASE("Next Permutation", "nextPermutation") {
    Solution s;
    vector<int> vec1 = {1,2,3};
    vector<int> res1 = {1,3,2};
    s.nextPermutation(vec1);
    REQUIRE(vec1 == res1);
    vector<int> vec2 = {3,2,1};
    vector<int> res2 = {1,2,3};
    s.nextPermutation(vec2);
    REQUIRE(vec2 == res2);
    vector<int> vec3 = {1,1,5};
    vector<int> res3 = {1,5,1};
    s.nextPermutation(vec3);
    REQUIRE(vec3 == res3);
    vector<int> vec4 = {5,1,1};
    vector<int> res4 = {1,1,5};
    s.nextPermutation(vec4);
    REQUIRE(vec4 == res4);
}
