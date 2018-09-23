#include "./solution.h"

int main(int argc, char const *argv[]) {
    Solution s;
    ListNode* input1 = create({1,4,3,2,5,2});
    input1 = s.partition(input1,3);
    print(input1);

    ListNode* input2 = create({1,2,3});
    input2 = s.partition(input2, 2);
    print(input2);

    ListNode* input3 = create({1,2,3,2,1});
    input3 = s.partition(input3, 3);
    print(input3);
}
