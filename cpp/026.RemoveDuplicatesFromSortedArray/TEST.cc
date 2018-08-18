#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
#include <iostream>
using namespace std;

void print(vector<int> nums) {
    for (int num: nums) {
        cout << num << " ";
    }
    cout << endl;
}

TEST_CASE("Remove Duplicates from Sorted Array", "uniqueArray") {
    Solution s;
    vector<int> first = {1,1,2}; 
    REQUIRE(s.removeDuplicates(first) == 2);
    print(first);
    vector<int> second = {0,0,1,1,1,2,2,3,3,4};
    REQUIRE(s.removeDuplicates(second) ==  5);
    print(second);
    vector<int> third = {1};
    REQUIRE(s.removeDuplicates(third) == 1);
    print(third);
    vector<int> forth = {};
    REQUIRE(s.removeDuplicates(forth) == 0);
}
