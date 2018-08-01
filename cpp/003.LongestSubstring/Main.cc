#include <iostream>
#include <string>
using namespace std;
#include "./solution.h"


int main(int argc, char const *argv[]) 
{
    Solution *solution = new Solution;
    cout << solution->lengthOfLongestSubstring("abcabcbb") << endl << endl;
    cout << solution->lengthOfLongestSubstring("bbbbbb") << endl <<  endl;
    cout << solution->lengthOfLongestSubstring("pwwkew") << endl << endl;
    cout << solution->lengthOfLongestSubstring("wa") << endl << endl;
}
