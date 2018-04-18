package t18_4sum;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;

/**
 * Created by zengq on 2017/5/24.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
//        int[] arr = new int[]{5,5,3,5,1,-5,1,-2};
//        int[] arr = new int[]{-1,0,1,2,-1,-4};
        int[] arr = new int[]{0, 0, 0, 0};
//        int[] arr = new int[]{1, 0, -1, 0, -2, 2};
        System.out.println(solution.fourSum(arr, 0));
    }

    public List<List<Integer>> fourSum(int[] nums, int target) {
        Arrays.sort(nums);
        List<List<Integer>> result = new LinkedList<>();
        for (int firstIndex = 0; firstIndex < nums.length - 2; firstIndex ++) {
            if (firstIndex > 0 && ( nums[firstIndex] == nums[firstIndex - 1])) {
                continue;
            }
            for (int secondIndex = firstIndex + 1; secondIndex < nums.length - 1; secondIndex ++) {
                if (secondIndex > firstIndex + 1 && nums[secondIndex] == nums[secondIndex - 1]) {
                    continue;
                }
                int start = secondIndex + 1;
                int end = nums.length - 1;
                while (start < end) {
                    int sum = nums[firstIndex] + nums[secondIndex] + nums[start] + nums[end];
                    if (sum == target) {
                        Integer[] arr = new Integer[]{nums[firstIndex], nums[secondIndex], nums[start], nums[end]};
                        result.add(Arrays.asList(arr));
                        // 去重
                        while (start < end && nums[start] == nums[start + 1]) start ++;
                        while (start < end && nums[end] == nums[end - 1]) end --;
                        start ++;
                        end --;
                    }
                    if (sum < target) {
                        start ++;
                    } else {
                        end --;
                    }
                }
            }
        }
        return result;
    }
}
