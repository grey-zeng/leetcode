package t23_mergeKList;

import util.ListNode;

/**
 * Created by zengq on 2017/5/25.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        ListNode[] lists = new ListNode[]{
                ListNode.getListNode(new int[]{1}),
                ListNode.getListNode(new int[]{1}),
                ListNode.getListNode(new int[]{45}),
                ListNode.getListNode(new int[]{12}),
                ListNode.getListNode(new int[]{4}),
                ListNode.getListNode(new int[]{3})
        };
        ListNode res = solution.mergeKLists(lists);
        while (res != null) {
            System.out.println(res.val);
            res = res.next;
        }
    }

    /**
     * 应该用到归并排序
     * @param lists
     * @return
     */
    public ListNode mergeKLists(ListNode[] lists) {
        if (lists.length == 0 ) {
            return null;
        }if (lists.length == 1) {
            return lists[0];
        } else {
            int halt = lists.length / 2;
            ListNode[] lists1 = new ListNode[halt];
            ListNode[] lists2 = new ListNode[lists.length - halt];
            for (int i = 0; i < lists.length; i++) {
                if (i < halt) {
                    lists1[i] = lists[i];
                } else {
                    lists2[i - halt] = lists[i];
                }
            }
            return mergeTwoList(mergeKLists(lists1), mergeKLists(lists2));
        }
    }

    private ListNode mergeTwoList(ListNode l1, ListNode l2) {
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
