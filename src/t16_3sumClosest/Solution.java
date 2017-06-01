package t16_3sumClosest;

import java.util.Arrays;

/**
 * Created by zengq on 2017/5/24.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
//        int[] arr = new int[]{1,1,1,1};
        int[] arr = new int[]{0,1,2};
//        int[] arr = new int[]{-1,2,1,-4};
        System.out.println(solution.threeSumClosest(arr, 1));
    }

    /**
     * 由三个数字相加,找出该值最接近于目标值的组合
     * @param nums
     * @param target
     * @return
     */
    public int threeSumClosest(int[] nums, int target) {
        if (nums.length < 3) {
            return 0;
        }
        Arrays.sort(nums);
        int res = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.length - 2; i ++) {
            int start = i + 1;
            int end = nums.length - 1;
            while (start < end) {
                int current = nums[i] + nums[start] + nums[end];
                if (Math.abs(current - target) < Math.abs(res - target)) {
                   res = current;
                }
                if (current < target) {
                    start ++;
                } else {
                    end --;
                }
            }
        }
        return res;
    }
}
