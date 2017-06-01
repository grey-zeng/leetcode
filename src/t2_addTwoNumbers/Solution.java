package t2_addTwoNumbers;

import util.ListNode;

/**
 * Created by zengq on 2017/5/18.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
//        ListNode l1 = solution.getListNode(new int[]{2,4,3});
//        ListNode l2 = solution.getListNode(new int[]{5,6,4});

        ListNode l1 = solution.getListNode(new int[]{1});
        ListNode l2 = solution.getListNode(new int[]{9,9});

        ListNode res = solution.addTwoNumbers(l1, l2);
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

    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode res = new ListNode(0);
        ListNode head = res;
        int prev = 0;
        while (l1 != null || l2 != null || prev != 0) {
            int current = (l1 == null ? 0 : l1.val) + (l2 == null ? 0: l2.val) + prev;
            head.next = new ListNode(current % 10);
            prev = current / 10;
            if (l1 != null) {
                l1 = l1.next;
            }
            if (l2 != null) {
                l2 = l2.next;
            }
            head = head.next;
        }
        return res.next;
    }
}
