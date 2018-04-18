package t27_removeElement;

/**
 * Created by zengq on 2017/6/1.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] arr = new int[]{3,2,2,3};
        System.out.println(solution.removeElement(arr, 3));
        for (int num : arr) {
            System.out.println(num);
        }
    }

    public int removeElement(int[] nums, int val) {
        int result = 0;
        for (int i = nums.length - 1; i >= 0; i --) {
            if (nums[i] == val) {
                System.arraycopy(nums, i + 1, nums, i, nums.length - 1 - i);
            } else {
                result ++;
            }
        }
        return result;
    }
}
