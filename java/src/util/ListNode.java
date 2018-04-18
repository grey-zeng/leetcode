package util;

/**
 * Created by zengq on 2017/5/18.
 */
public class ListNode {
    public int val;
    public ListNode next;
    public ListNode(int x) { val = x; }

    public static ListNode getListNode(int[] nums) {
        ListNode res = new ListNode(nums[0]);
        ListNode tmp = res;
        for (int i = 1; i < nums.length; i++) {
            tmp.next = new ListNode(nums[i]);
            tmp = tmp.next;
        }
        return res;
    }
}
