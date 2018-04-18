package t19_removeNode;

import util.ListNode;

/**
 * Created by zengq on 2017/5/24.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        ListNode list = solution.getListNode(new int[]{1, 2});
//        ListNode list = solution.getListNode(new int[]{1,2,3,4,5,6});
        ListNode res = solution.removeNthFromEnd(list, 2);
        while (res != null) {
            System.out.println(res.val);
            res = res.next;
        }
    }

    private ListNode getListNode(int[] nums) {
        ListNode res = new ListNode(nums[0]);
        ListNode tmp = res;
        for (int i = 1; i < nums.length; i++) {
            tmp.next = new ListNode(nums[i]);
            tmp = tmp.next;
        }
        return res;
    }

    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode current, end;
        current = end = head;
        while (n -- > 0) {
            end = end.next;
        }
        if (end == null) {
            return head.next;
        }
        while (end.next != null) {
            current = current.next;
            end = end.next;
        }
        current.next = current.next.next;
        return head;
    }
}
