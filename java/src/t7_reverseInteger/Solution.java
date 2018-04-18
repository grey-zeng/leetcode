package t7_reverseInteger;

/**
 * Created by zengq on 2017/5/21.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.reverse(321));
        System.out.println(solution.reverse(-321));
    }

    public int reverse(int x) {
        int result = 0;

        while (x != 0)
        {
            int tail = x % 10;
            int newResult = result * 10 + tail;
            // 溢出判断,保证不会超过最大范围
            if ((newResult - tail) / 10 != result)
            { return 0; }
            result = newResult;
            x = x / 10;
        }

        return result;
    }
}
