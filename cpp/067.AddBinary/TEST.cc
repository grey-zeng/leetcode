#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <string>
using namespace std;

TEST_CASE("Add Binary", "addBinary") {
    Solution s;
    REQUIRE(s.addBinary("11", "1") == "100");
    REQUIRE(s.addBinary("1010", "1011") == "10101");
    REQUIRE(s.addBinary("0", "0") == "0");
    REQUIRE(s.addBinary("1", "0") == "1");
    REQUIRE(s.addBinary("1", "1") == "10");
    REQUIRE(s.addBinary("10", "1") == "11");
    REQUIRE(s.addBinary("10", "0") == "10");
    REQUIRE(s.addBinary
            (
                "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101",
                "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011"
            )
            == 
            "110111101100010011000101110110100000011101000101011001000011011000001100011110011010010011000000000");
}
