#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
#include <string>
using namespace std;

TEST_CASE("Restore IP Addresses", "restoreIpAddresses") {
    Solution s;
    vector<string> output1 = {
        "255.255.11.135",
        "255.255.111.35",
    };
    REQUIRE(s.restoreIpAddresses("25525511135") == output1);
}
