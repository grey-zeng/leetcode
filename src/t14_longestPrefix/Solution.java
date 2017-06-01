package t14_longestPrefix;

/**
 * Created by zengq on 2017/5/22.
 */
public class Solution {
    public static void main(String[] args) {
        String[] strs = new String[]{"asef"};
//        String[] strs = new String[]{"abcdefg", "abcdfgwe", "abcdefgg"};
        Solution solution = new Solution();
        System.out.println(solution.longestCommonPrefix(strs));
    }

    public String longestCommonPrefix(String[] strs) {
        if (strs.length == 0) {
            return "";
        }
        int index = 0;
        StringBuffer sb = new StringBuffer();
        boolean equal = true;
        do {
            char current = ' ';
            for (int i = 0; i < strs.length && equal; i++) {
                if (index < strs[i].length()) {
                    if (i == 0) {
                        current = strs[i].charAt(index);
                    } else {
                        equal = current == strs[i].charAt(index);
                    }
                } else {
                    equal = false;
                }
            }
            if (equal) sb.append(current);
            index ++;
        } while (equal);
        return sb.toString();
    }
}
