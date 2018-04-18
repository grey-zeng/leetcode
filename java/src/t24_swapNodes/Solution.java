package t24_swapNodes;

import util.ListNode;

/**
 * Created by zengq on 2017/5/25.
 */
public class Solution {
    public static void main(String[] args) {
        ListNode list = ListNode.getListNode(new int[]{1, 2, 3, 4});
        Solution solution = new Solution();
        ListNode res = solution.swapPairs(list);
        while (res != null) {
            System.out.println(res.val);
            res = res.next;
        }
    }

    public ListNode swapPairs(ListNode head) {
        ListNode result = new ListNode(0);
        result.next = head;
        ListNode point = result;
        while (point.next != null && point.next.next != null) {
            ListNode tmp = point.next.next;
            point.next.next = tmp.next;
            tmp.next = point.next;
            point.next = tmp;
            point = tmp.next;
        }
        return result.next;
    }
}
