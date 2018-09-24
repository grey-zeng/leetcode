#include "./solution.h"

int main (int argc, char const *argv[]) {
    Solution s;

    ListNode* input1 = create({1,2,3,4,5});
    input1 = s.reverseBetween(input1, 2, 4);
    print(input1);
}
