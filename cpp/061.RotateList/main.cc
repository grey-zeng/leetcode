#include "./solution.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    Solution s;
    ListNode* input1 = create({1,2,3,4,5});
    print(s.rotateRight(input1, 2));
    cout << endl;

    ListNode* input2 = create({0,1,2});
    print(s.rotateRight(input2, 4));
    cout << endl;

    ListNode* input3 = create({1,2});
    print(s.rotateRight(input3, 2));
}
