package t5_longestPalindromic;

/**
 * Created by zengq on 2017/5/21.
 */
public class Solution {
    public static void main(String[] args) {
        String str1 = "babad";
        String str2 = "cbbd";
        String str3 = "abcda";

        Solution solution = new Solution();

//        System.out.println(solution.longestPalindrome(str1));
//        System.out.println(solution.longestPalindrome(str2));
        System.out.println(solution.longestPalindrome(str3));
    }

    /**
     * 回文检测算法
     * @param s
     * @return
     */
    public String longestPalindrome(String s) {
        int n = s.length();
        boolean[][] flag = new boolean[n][n];
        int[] res = new int[2];
        for (int end = 0; end < n; end ++) {
            for (int start = end; start >= 0; start --) {
                if ((s.charAt(start) == s.charAt(end)) && ((end - start) < 2  || flag[start + 1][end - 1]) ) {
                    flag[start][end] = true;
                    if ((res[1] - res[0]) < (end - start + 1)) {
                        res[0] = start;
                        res[1] = end;
                    }
                }
            }
        }
        return s.substring(res[0], res[1] + 1);
    }
}
