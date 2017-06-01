package t17_phoneNumber;

import java.util.LinkedList;
import java.util.List;

/**
 * Created by zengq on 2017/5/24.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.letterCombinations(""));
    }

    /**
     * 给出一串数字,利用键盘表的映射得到结果
     * @param digits
     * @return
     */
    public List<String> letterCombinations(String digits) {
        if (digits.length()  == 0) {
            return new LinkedList<>();
        }
        List<String> result = new LinkedList<>();
        search(digits, 0, "", result);
        return result;
    }

    private static char[][] dict = {
            {},
            {' '},
            {'a','b', 'c'},
            {'d', 'e', 'f'},
            {'g', 'h', 'i'},
            {'j', 'k', 'l'},
            {'m', 'n', 'o'},
            {'p', 'q', 'r', 's'},
            {'t', 'u', 'v'},
            {'w', 'x', 'y', 'z'}
    };

    private static void search(String digits, int index, String prev, List<String> result) {
        if (index == digits.length()) {
            result.add(prev);
        } else {
            for (char item : dict[digits.charAt(index) - '0']) {
                search(digits, index + 1, prev + item, result);
            }
        }
    }
}
