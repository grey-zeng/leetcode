package t26_removeDuplicates;

/**
 * Created by zengq on 2017/6/1.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.removeDuplicates(new int[]{1,1,2}));
    }
    public int removeDuplicates(int[] nums) {
        int i = 0;
        for (int num : nums) {
            if (i == 0 || num > nums[i - 1]) {
                nums[i++] = num;
            }
        }
        return i;
    }
}
