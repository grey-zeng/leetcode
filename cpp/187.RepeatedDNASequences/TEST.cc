#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Repeated DNA Sequences", "findRepeatedDnaSequences") {
    Solution s;
    vector<string> output1 = {"AAAAACCCCC", "CCCCCAAAAA"};
    REQUIRE(s.findRepeatedDnaSequences("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT") == output1);
}
