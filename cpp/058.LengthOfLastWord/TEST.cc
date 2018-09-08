#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <string>
using namespace std;

TEST_CASE("Length of Last Word", "lengthOfLastWord") {
    Solution s;
    REQUIRE(s.lengthOfLastWord("Hello World") == 5);
    REQUIRE(s.lengthOfLastWord("Hello World   ") == 5);
    REQUIRE(s.lengthOfLastWord("") == 0);
    REQUIRE(s.lengthOfLastWord("    ") == 0);
}
