#include "../util/randomListNode.h"
#include <map>

class Solution {
public:
    /**
     * @see https://leetcode.com/problems/copy-list-with-random-pointer/discuss/43497/2-clean-C++-algorithms-without-using-extra-arrayhash-table.-Algorithms-are-explained-step-by-step.
     * 表示很佩服
     */
    RandomListNode *copyRandomList(RandomListNode *head) {
        RandomListNode *newHead, *l1, *l2;
        if (head == NULL) return NULL;
    
        for (l1 = head; l1 != NULL; l1 = l1->next) {
            l2 = new RandomListNode(l1->label);
            l2->next = l1->random;
            l1->random = l2;
        }
        
        newHead = head->random;
        for (l1 = head; l1 != NULL; l1 = l1->next) {
            l2 = l1->random;
            l2->random = l2->next ? l2->next->random : NULL;
        }
        
        for (l1 = head; l1 != NULL; l1 = l1->next) {
            l2 = l1->random;
            l1->random = l2->next;
            l2->next = l1->next ? l1->next->random : NULL;
        }
    
        return newHead;
    }


    // 效率过差 超时了
    RandomListNode *copyRandomList_bad(RandomListNode *head) {
        if (head == NULL) return NULL;
        if (nodeMap.find(head) != nodeMap.end()) return nodeMap[head];
        RandomListNode* res = new RandomListNode(0); 
        RandomListNode* point = res;
        while (head != NULL) {
            point->next = new RandomListNode(head->label);
            nodeMap[head] = point->next;
            point->next->random = copyRandomList_bad(head->random);
            head = head->next;
            point = point->next;
        }
        return res->next;
    }
private:
    map<RandomListNode*, RandomListNode*> nodeMap; 
};
