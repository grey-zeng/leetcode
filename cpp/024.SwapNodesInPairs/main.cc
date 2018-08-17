#include <vector>
#include <iostream>
using namespace std;

#include "solution.h"

int main (int argc, char const *argv[]) {
    Solution s;
    ListNode *example1 = create({1,2,3,4});
    example1 = s.swapPairs(example1);
    print(example1);
    cout << endl;
    ListNode *example2 = create({1});
    s.swapPairs(example2);
    print(example2);
    cout << endl;
    ListNode *example3 = create({1,2,3});
    s.swapPairs(example3);
    print(example3);
}
