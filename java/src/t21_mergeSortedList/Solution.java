package t21_mergeSortedList;

import util.ListNode;

/**
 * Created by zengq on 2017/5/24.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution =  new Solution();
        ListNode list1 = ListNode.getListNode(new int[]{1,3,5});
        ListNode list2 = ListNode.getListNode(new int[]{2,4,6});
        ListNode res = solution.mergeTwoLists(list1, list2);
        while (res != null) {
            System.out.println(res.val);
            res = res.next;
        }
    }

    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode result = new ListNode(0);
        ListNode head = result;
        while (l1 != null || l2 != null) {
            if (l2 == null) {
                head.next = new ListNode(l1.val);
                l1 = l1.next;
            } else if (l1 == null) {
                head.next = new ListNode(l2.val);
                l2 = l2.next;
            } else {
                if (l1.val < l2.val) {
                    head.next = new ListNode(l1.val);
                    l1 = l1.next;
                } else {
                    head.next = new ListNode(l2.val);
                    l2 = l2.next;
                }
            }
            head = head.next;
        }
        return result.next;
    }
}
