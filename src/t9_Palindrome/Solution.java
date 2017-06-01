package t9_Palindrome;

/**
 * Created by zengq on 2017/5/21.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.isPalindrome(121));
        System.out.println(solution.isPalindrome(1221));
        System.out.println(solution.isPalindrome(1));
        System.out.println(solution.isPalindrome(12));
    }

    public boolean isPalindrome(int x) {
        String nums = (new StringBuffer()).append(x).toString();
        for (int i = 0; i < nums.length() / 2; i ++) {
            if (nums.charAt(i) != nums.charAt(nums.length() - i - 1)) {
                return false;
            }
        }
        return true;
    }

    /**
     * 使用逆序,然后判断是否相同
     * @param x
     * @return
     */
    public boolean good(int x) {
        if (x<0 || (x!=0 && x%10==0)) return false;
        int rev = 0;
        while (x>rev){
            rev = rev*10 + x%10;
            x = x/10;
        }
        return (x==rev || x==rev/10);
    }
}
