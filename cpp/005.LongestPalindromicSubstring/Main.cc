#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main(int argc, char const *argv[])
{
    Solution *solution = new Solution;
    cout << solution->longestPalindrome("1111") << endl;
    cout << solution->longestPalindrome("") << endl;
    cout << solution->longestPalindrome("11221") << endl;
    cout << solution->longestPalindrome("babad") << endl;
}
