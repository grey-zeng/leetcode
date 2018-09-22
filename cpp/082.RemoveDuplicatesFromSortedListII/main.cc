#include "./solution.h"

int main (int argc, char const *argv[]) {
    Solution s;
    
    ListNode* input1 = create({1,2,3,3,4,4,5}); 
    input1 = s.deleteDuplicates(input1);
    print(input1);

    ListNode* input2 = create({1,1,1,2,3});
    input2 = s.deleteDuplicates(input2);
    print(input2);

    ListNode* input3 = create({1,1,1});
    input3 = s.deleteDuplicates(input3);
    print(input3);

    ListNode* input4 = create({1,2,2});
    input4 = s.deleteDuplicates(input4);
    print(input4);

    return 0;
}
