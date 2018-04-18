package t25_swapKNodes;

import util.ListNode;

/**
 * Created by zengq on 2017/6/1.
 */
public class Solution {
    public static void main(String[] args) {
        ListNode nodes = ListNode.getListNode(new int[]{1, 2, 3, 4, 5});
        Solution solution = new Solution();
        ListNode res = solution.reverseKGroup(nodes, 1);
        while (res != null) {
            System.out.println(res.val);
            res = res.next;
        }
    }

    public ListNode reverseKGroup(ListNode head, int k) {
        ListNode res = new ListNode(0);
        res.next = head;
        ListNode start, end;
        start = res;
        end = res;
        while (start != null && end != null) {
            int num = k;
            // todo 最好的方式还是通过反转链表来做
            ListNode[] tmp = new ListNode[k];
            while (num-- > 0 && end.next != null) {
                end = end.next;
                tmp[num] = end;
            }
            if (num == -1) {
                start.next = tmp[0];
                tmp[k - 1].next = end.next;
                for (int i = 0; i < tmp.length - 1; i++) {
                    tmp[i].next = tmp[i + 1];
                }
                start = tmp[k - 1];
                end = start;
            } else {
                break;
            }
        }

        return res.next;
    }
}
