package t13_roman2integer;

import java.util.HashMap;
import java.util.Map;

/**
 * Created by zengq on 2017/5/22.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
//        System.out.println("VI:\t28_strStr" + solution.romanToInt("VI"));
        System.out.println("IX:\t" + solution.romanToInt("IX"));
        System.out.println("XVIII:\t" + solution.romanToInt("XVIII"));
        System.out.println("XXX:\t" + solution.romanToInt("XXX"));
        System.out.println("MDCCCLXXXIV:\t" + solution.romanToInt("MDCCCLXXXIV"));
        System.out.println("MMMCM:\t" + solution.romanToInt("MMMCM"));
    }

    public int romanToInt(String s) {
        int res = 0;
        Map<Character, Integer> map = new HashMap<>();
        map.put('I', 1);
        map.put('V', 5);
        map.put('X', 10);
        map.put('L', 50);
        map.put('C', 100);
        map.put('D', 500);
        map.put('M', 1000);
        for (int i = 0; i < s.length(); i++) {
            int current = map.get(s.charAt(i));
            if (i < s.length() -1 && current < map.get(s.charAt(i + 1)) && (current == 1 || current == 10 || current == 100 || current == 1000)) {
                res += (map.get(s.charAt(i + 1)) - current);
                i ++;
            } else {
                res += current;
            }
        }
        return res;
    }
}
