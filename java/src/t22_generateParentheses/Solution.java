package t22_generateParentheses;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Stack;

/**
 * Created by zengq on 2017/5/25.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        List<String> result = solution.generateParenthesis(3);
        for (String str: result) {
            System.out.println(str);
        }
    }

    public List<String> generateParenthesis(int n) {
        List<String> result = new LinkedList<>();
        generate(result, "", 0, 0, n);
        return result;
    }

    private void generate(List<String> res, String str, int open, int close, int n) {
        if (close == n) {
            res.add(str);
        } else {
            if (open < n) {
                generate(res, str + '(', open + 1, close, n);
            }
            if (close < open) {
                generate(res, str + ')', open, close + 1, n);
            }
        }
    }
}
