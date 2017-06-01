package t3_longestSubstr;

import java.util.*;

/**
 * Created by zengq on 2017/5/21.
 */
public class Solution {
    public static void main(String[] args) {
        String str1 = "abcabcbb";
        String str2 = "bbbb";
        String str3 = "pwwkew";
        String str4 = "dvdf";
        String str5 = "bbtablud";
        String str6 = "abba";
        String str7 = "tmmzuxt";
        Solution solution = new Solution();
        System.out.println(solution.lengthOfLongestSubstring(str1));
        System.out.println(solution.lengthOfLongestSubstring(str2));
        System.out.println(solution.lengthOfLongestSubstring(str3));
        System.out.println(solution.lengthOfLongestSubstring(str4));
        System.out.println(solution.lengthOfLongestSubstring(str5));
        System.out.println(solution.lengthOfLongestSubstring(str6));
        System.out.println(solution.lengthOfLongestSubstring(str7));
    }

    public int lengthOfLongestSubstring(String s) {
        int res = 0;
        Map<Character, Integer> map = new HashMap<>();
        for (int index = 0, start = 0; index < s.length(); index ++ ) {
            char current = s.charAt(index);
            if (map.containsKey(current)) {
                start = Math.max(map.get(current) + 1, start);
            }
            res = Math.max(res, index - start + 1);
            map.put(current, index);
        }
        return res;
    }
}
